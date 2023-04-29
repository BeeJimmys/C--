#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class studentManager
{
public:
    studentManager();

    void showMenu();

    void Exit();

    void Add_stu();

    ~studentManager();

    int m_stuNum;

    Student **m_stuArray;
};

studentManager::studentManager()
{
    this->m_stuNum = 0;
    this->m_stuArray = NULL;
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
        }
    }
    else
    {
        /* code */
    }
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
}

void studentManager::Exit()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}