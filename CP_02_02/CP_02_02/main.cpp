#include <iostream>

using namespace std;

int main()
{
    bool A = false;
    bool B = false;
    bool C = true;
   //(не А або не В) і(А або В);
    if (!A && !B)
        cout << "If you see this message, then the condition is true.\n";
    else
        cout << "If you see this message, then the condition is false.\n";

    system("pause");
    system("cls");
	//////////////////////
    int c;
    cout << "Enter c: ";
    cin >> c;
    if (c == 2 || c == 6)
        cout << "If you see this message, then the condition is true.\n";
    else
        cout << "If you see this message, then the condition is false.\n";
    system("pause");
    system("cls");
    //////////////////////
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
	
    if (x <= -2 && y >= 1)
        cout << "If you see this message, then the condition is true.\n";
    else
        cout << "If you see this message, then the condition is false.\n";
    system("pause");
    system("cls");
    //////////////////////

	x = 0, y = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (((x >= -1 && x <= 1) && (y <= 1 && y >= 0)) || ((x * x >= -1 && x * x <= 1)||(y <= 1 && y >= 0)))
        cout << "If you see this message, then the condition is true.\n";
    else
        cout << "If you see this message, then the condition is false.\n"; 

    system("pause");
    system("cls");
    //////////////////////

	int a;
    cout << "Enter score: ";
    cin >> a;
    if (a == 3)
    {
        cout << "Win" << endl;
    }
    else if (a == 0)
    {
        cout << "Defeat" << endl;
    }
    else if (a == 1)
    {
        cout << "Draw" << endl;
    }
    else
    {
	    cout << "Unknown" << endl;
    }
    system("pause");
    system("cls");
    //////////////////////
	int p1 = 3, p2 = 6, p3 = 12, temp1, temp2, temp3;
    x = 0;
    cout << "Enter the amount for the deposit: ";
    cin >> x;

    temp1 = x + (x / p1);
    temp2 = x + (x / p2);
    temp3 = x + (x / p3);

    if (temp1 > temp2 && temp1 > temp3)

        cout << "A 3-month deposit at 3% is the most profitable! ";

    if (temp2 > temp1 && temp2 > temp3)

        cout << "A 6-month deposit at 6% is the most profitable! ";

    if (temp3 > temp1 && temp3 > temp2)

        cout << "Investment for a year at 1% is the most profitable! ";

    system("pause");
    system("cls");
    return 0;
}