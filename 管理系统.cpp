#include <iostream>
using namespace std;
#include "workManager.h"
int main()
{
    WorkManager wm;

    char choice = '0';

    while (true)
    {
        wm.showMenu();
        cout << "请输入选项" << endl;
        cin >> choice;

        switch (choice)
        {
        case '0': // 退出功能
            wm.Exit();
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