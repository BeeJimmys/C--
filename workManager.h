#include <iostream>
#include <string>
using namespace std;

class WorkManager
{
public:
    WorkManager();

    void showMenu();

    void Exit();

    ~WorkManager();
};

WorkManager::WorkManager()
{
}
void WorkManager::showMenu()
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
WorkManager::~WorkManager()
{
}

void WorkManager::Exit()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}