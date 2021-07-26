#include<iostream>
#include <iostream>
#include <iomanip>
using namespace  std;

    /*bool prime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }*/
int main()
{
   /*
    int count = 0;
    int number = 2;
    while (count != 100)
    {
		if (prime(number))
        {
			cout << number << "\t";
            count++;
        }
        number++;
    }*/

    
	
	/////////////////////////
   /* long long numb, divisor = 2;
    cin >> numb;
    while (divisor * divisor <= numb)
    {
        if (numb % divisor == 0)
        {
            cout << divisor;
            numb = numb / divisor;
            cout << '*';
        }
        else if (divisor == 2) divisor = 3;
        else divisor = divisor + 2;
    }
    cout << numb;
    system("pause");
    system("cls");*/
    ////////////////////////////
    int h = 0, w = 0, start_num = 13;

    cout << "Enter h: ";
    cin >> h;
    cout << "Enter w: ";
    cin >> w;
	
    for (int i = start_num; i> start_num -h; i--)
    {
        int k = start_num;
        for (int j = 0; j < w; j++)
        {
            cout <<setw(3)<< k << " ";
            k--;
        }
        cout << endl;
    }
    system("pause");
    system("cls");

    for (int i = 1; i <= 9; i++)
    {
		for (int j = 1; j <= 9; j++)
        {
	        cout<< j << " * " << i << " = " << i * j << "\t";
        }
        cout  << endl;
    }
    system("pause");
    system("cls");
	
    h = 0, w = 0;
	int num = 5;

    cout << "Enter h:";
    cin >> h;
    cout << "Enter w:";
    cin >> w;
	int k = 0;
    for (int i = h; i > 0; i--)
    {
        
        for (int j = 0; j < k + 1; j++)
        {
            cout << setw(3) << num << " ";
        }
        k++;
		
        cout << endl;
    }
	system("pause");
    system("cls");
    /////////////////////
    
    int a = 5, b = 50;
    for (int i = a; i <= b; i++) {
        int n = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) n++;
        }
        cout << i << " have " << n << " divisors " << endl;
    }
    
    system("pause");
    system("cls");
	return 0;
}