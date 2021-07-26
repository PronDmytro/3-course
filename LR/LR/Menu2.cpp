#include "task2Func.h"
void menu2()
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
	case 1:t2v1();break;
	case 2:t2v2();break;
	case 3:t2v3();break;
	case 4:t2v4();break;
	case 5:t2v5();break;
	case 6:t2v6();break;
	case 7:t2v7();break;
	case 8:t2v8();break;
	case 9:t2v9();break;
	case 10:t2v10();break;
	case 0: break;
	default:
		cout<<"Error"<<endl;
	}
	system("cls");

}