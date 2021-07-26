#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int d = 0;
 //   cout << "День? ";
	//cin >> d;
 //   switch (d)
 //   {
 //   case 1: cout << "Понеділок"; break;
 //   case 2: cout << "Вівторок"; break;
 //   case 3: cout << "Среда"; break;
 //   case 4: cout << "Четвер"; break;
 //   case 5: cout << "П'ятниця"; break;
 //   case 6: cout << "Субота"; break;
 //   case 7: cout << "Неділя"; break;
 //   default: cout << "Перевірте правильність введених даних!";
 //   };
 //   cout << endl;
 //   system("pause");
 //   system("cls");
	
    int days_in_mounts[12] = {31,28,31,30,31,30,31,31,30,31,30,31 };
    int g = 0, m = 0;
    d = 0;
    cout << "Введіть рік: ";
    cin >> g;
    cout << "Введіть місяць: ";
    cin >> m;
    if (m < 1 || m > 12)
    {
        cout << "Перевірте правильність введених даних!";
    }
    else
    {
        cout << "Введіть день: ";
        cin >> d;
        if (d > 0 || d <= days_in_mounts[m-1])
        {
			if (g % 4 == 0)
                days_in_mounts[1] = 29;

            if (d + 1 > days_in_mounts[m - 1])
            {
                d = 1;
                if (m + 1 > 12)
                {
                    m = 1;
                    g++;
                    cout << g << "/" << m << "/" << d << endl;
                }
                else
                {
                    cout << g << "/" << m << "/" << d << endl;
                }
            }
            else
            {
                d++;
                cout << g << "/" << m << "/" << d << endl;
            }
        }
        else
        {
        	cout << "Перевірте правильність введених даних!";
        }
    }
}

