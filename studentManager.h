#include <iostream>
#include <string>
#include <fstream>
#include "student.h"
#define FILENAME "StuFile.txt"
using namespace std;

class studentManager
{
public:
    studentManager();
    // 菜单
    void showMenu();
    // 退出
    void Exit();
    // 添加学生
    void Add_stu();
    // 保存到文件
    void save();
    // 判断文件是否为空
    bool m_fileIsEmpty;
    // 统计文件中学生人数
    int get_StuNum();

    ~studentManager();

    int m_stuNum;

    Student **m_stuArray;
};

studentManager::studentManager()
{
    // 1.文件不存在
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        // 初始化记录人数
        this->m_stuNum = 0;
        // 初始化数组指针
        this->m_stuArray = NULL;
        this->m_fileIsEmpty = true;
        ifs.close();
        return;
    }
    // 2.文件为空（存在）
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件为空！" << endl;
        // 初始化记录人数
        this->m_stuNum = 0;
        // 初始化数组指针
        this->m_stuArray = NULL;
        this->m_fileIsEmpty = true;
        ifs.close();
        return;
    }
    // 文件存在且不为空
    int num = this->get_StuNum();
    cout << "学生人数为：" << num << endl;
    this->m_stuNum = num;
    return;
}

int studentManager ::get_StuNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    int age;
    string name;
    int major;
    int num = 0;
    while (ifs >> id && ifs >> age && ifs >> name && ifs >> major)
    {
        // 学生人数
        num++;
    }
    return num;
}
void studentManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::app);
    // 学生信息写入到文件
    for (int i = 0; i < this->m_stuNum; i++)
    {
        ofs << this->m_stuArray[i]->m_id << " "
            << this->m_stuArray[i]->m_name << " "
            << this->m_stuArray[i]->m_age << " "
            << this->m_stuArray[i]->m_major << endl;
    }
    // 关闭文件
    ofs.close();
}

void studentManager::Add_stu()
{
    cout << "请输入添加学生的数量：" << endl;
    int addNum = 0; // 记录学生数量
    cin >> addNum;
    if (addNum > 0)
    {
        // 新的空间大小
        int newSize = this->m_stuNum + addNum;
        Student **newSpace = new Student *[newSize];

        // 原数据放入新空间
        if (this->m_stuArray = NULL)
        {
            for (int i = 0; i < this->m_stuNum; i++)
            {
                newSpace[i] = this->m_stuArray[i];
            }
        }
        // 添加新数据
        for (int i = 0; i < addNum; i++)
        {
            int id;
            int age;
            string name;
            char major;
            cout << "请输入第" << i + 1 << "个学生编号：" << endl;
            cin >> id;
            cout << "请输入第" << i + 1 << "个学生姓名：" << endl;
            cin >> name;
            cout << "请输入第" << i + 1 << "个学生年龄：" << endl;
            cin >> age;
            Student *Stu = NULL;
            bool n = true;
            while (n)
            {

                cout << "请选择个学生专业：" << endl;
                cout << "1.软件工程" << endl;
                cout << "2.计算机科学与技术" << endl;
                cout << "3.隐藏选项" << endl;
                cout << "请输入选择:" << endl;
                cin >> major;
                // 选择对象，使用基类指针调用子类
                switch (major)
                {
                case '1':
                    n = false;
                    Stu = new SeStudent(id, age, name, 1);
                    break;
                case '2':
                    n = false;
                    Stu = new CsStudent(id, age, name, 2);
                    break;
                case '3':
                    n = false;
                    Stu = new HackStudent(id, age, name, 3);
                    break;
                default:
                    system("cls"); // 清屏
                    cout << "请检查输入是否正确！" << endl;
                    break;
                }
            }

            // 创建学生专业，保存到数组中
            newSpace[this->m_stuNum + i] = Stu;
        }
        // 释放原先空间
        delete[] this->m_stuArray;

        // 更改新空间指向
        this->m_stuArray = newSpace;

        // 新学生人数
        this->m_stuNum = newSize;

        // 更新学生不为空标志
        this->m_fileIsEmpty = false;

        // 保存数据
        this->save();
        cout << "添加成功" << addNum << "名学生" << endl;
    }
    else
    {
        cout << "输入有误！" << endl;
    }
    // 按任意键后清屏返回上一级
    system("pause");
    system("cls");
}
void studentManager::showMenu()
{
    cout << "------------------------------" << endl;
    cout << "      欢迎使用学生管理系统      " << endl;
    cout << "           0.退出系统          " << endl;
    cout << "           1.添加信息          " << endl;
    cout << "           2.显示信息          " << endl;
    cout << "           3.删除信息          " << endl;
    cout << "           4.修改信息          " << endl;
    cout << "           5.查找信息          " << endl;
    cout << "           6.信息排序          " << endl;
    cout << "           7.清空信息          " << endl;
    cout << endl;
}
studentManager::~studentManager()
{
    if (this->m_stuArray != NULL)
    {
        delete[] this->m_stuArray;
        this->m_stuArray = NULL;
    }
}

void studentManager::Exit()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}