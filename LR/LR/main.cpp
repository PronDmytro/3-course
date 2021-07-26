#include"menu.h"

int main()
{
	while (true)
	{
	int n;
	cout<<"Choose task:\n Task 1\n Task 2"<<endl;
	cin >> n;
	switch(n)
	{ 
	case 1:menu1(); break;
	case 2:menu2(); break;
	case 0: return 0;
	default:
		cout<<"Error"<<endl;
	}
	system("cls");
	}

}