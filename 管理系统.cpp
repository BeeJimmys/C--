#include <iostream>
using namespace std;
#include "studentManager.h"
#include "student.h"
int main()
{
    studentManager sm;
    Student *stu = NULL;
    stu = new SeStudent(1, 19, "张三", 1);
    stu->showInfo();

    char choice = '0';

    while (true)
    {
        sm.showMenu();
        cout << "请输入选项" << endl;
        cin >> choice;

        switch (choice)
        {
        case '0': // 退出功能
            sm.Exit();
            break;
        case '1':

            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;
        case '5':

            break;
        case '6':

            break;
        case '7':

            break;

        default:
            system("cls"); // 清屏
            break;
        }
    }

    system("pause");
    return 0;
}