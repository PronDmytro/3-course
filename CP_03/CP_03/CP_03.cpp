#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	//////////////1
	int b1;
	cout << "Enter b: ";
	cin >> b1;
	if (b1 > -2)
		for (auto i = -2; i <= b1; i++)
			cout << i << endl;
	else
		cout << "Error: b<=-2" << endl;

	system("pause");
	system("cls");
	//////////2
	auto sum = 0, count = 0;
	int a2, b2;
	cout << "Enter a: ";
	cin >> a2;
	cout << "Enter b: ";
	cin >> b2;
	if (b2 > a2)
	{
		for (auto i = a2; i <= b2; i++)
		{
			count++;
			sum += i;
		}
		cout << "Ser = " << sum / count << endl;
	}
	else
		cout << "Error: b<a" << endl;
	
	system("pause");
	system("cls");
	/////////////////3
	double start, end, dX, a, b, c;
	cout << "enter Xnach: ";
	cin >> start;
	cout << "enter Xkon: ";
	cin >> end;
	cout << "enter dX: ";
	cin >> dX;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c: ";
	cin >> c;
	system("cls");

	cout << setw(5) << "x" << "|" << setw(5) << "num" << endl;
	for (auto x = start; x < end; x += dX)
	{
		if (x < 1 && c != 0)
		{
			cout << setw(5) << x << "|" << setw(5) << (a * pow(x, 2)) + (b / c) << endl;
		}
		else if (x > 1.5 && c == 0)
		{
			cout << setw(5) << x << "|" << setw(5) << (x - a) / pow((x - c), 2) << endl;
		}
		else
		{
			cout << setw(5) << x << "|" << setw(5) << pow(x, 2) / pow(c, 2) << endl;
		}
	}
	
	system("pause");
	system("cls");

	///////////////4
	//long double sum4 = 8;
	//double x4 = 8;
	//for (auto i = 3; i <= 11; i+=2)
	//{
	//	for (auto j = 0; j < i; j++)
	//	{
	//		x4 *= 8;
	//	}
	//	sum4 += x4 / i;
	//	x4 = 8;
	//}
	//cout << "Sum = " << setprecision(100)<< sum4 << setprecision(4) << endl;

	//
	//system("pause");
	//system("cls");
	///////5
	//auto n=0;  

	//cout << "Enter sallary: "; 

	//sum = 0;
	//while(cin >> n)   
	//{
	//	if (n != 0)
	//	{
	//		sum += n;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	//system("cls");
	//
	//cout << "Sum = " << sum << endl;

	//system("pause");
	//system("cls");
	//////////////////6
	//int a6,n6;
	//
	//cout << "a: ";
	//cin >> a6;
	//cout << "n: ";
	//cin >> n6;
	//if (n6 > 0 || a6 > 0)
	//{

	//	for (int i = 1; i <= n6; i++)
	//	{
	//		if (i == n6)
	//		{
	//			cout << a6 << "*" << i << ";" << endl;
	//		}
	//		else if (i % 2 == 0)
	//		{
	//			cout << a6 << "*" << i << "+";
	//		}
	//		else
	//		{
	//			cout << a6 << "*" << i << "-";
	//		}
	//	}
	//}
	//else
	//{
	//	cout << "Error" << endl;
	//}

	//system("pause");
	//system("cls");
	////////////7
	//double length = 10, full = 0;
	//for (auto i = 0; i < 10; i++)
	//{
	//	if (i != 0)
	//		length += length * 0.1;
	//	if (i <= 6)
	//		full += length;
	//	cout << "Mileage for " << i + 1 << "d. -> " << length << "km.\n";
	//}
	//cout << "Total mileage in 7 days: " << full << "km.\n";
	//system("pause");
	//system("cls");
	/////////////8
	//int number, sum = 0;
	//cout << "Enter num: ";

	//cin >> number;
	//
	//do {
	//	sum += number % 10;
	//} while (number /= 10);
	//
	//cout << "Sum = " << sum << endl;
	//
	//system("pause");
	//system("cls");


}