#include "task1Func.h"
void menu1()
{
	int n;
	system("cls");
	for(int i = 1; i <=10; i++)
	{
		cout<<"Variant "<< i<<endl;
	}
	cout<<"Return to main menu - 0"<<endl;
	cin >> n;
	system("cls");
	switch(n)
	{ 
	case 1:t1v1();break;
	case 2:t1v2();break;
	case 3:t1v3();break;
	case 4:t1v4();break;
	case 5:t1v5();break;
	case 6:t1v6();break;
	case 7:t1v7();break;
	case 8:t1v8();break;
	case 9:t1v9();break;
	case 10:t1v10();break;
	case 0: break;
	default:
		cout<<"Error"<<endl;
	}
	system("cls");
}