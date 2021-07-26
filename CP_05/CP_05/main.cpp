#include<iostream>
#include <vector>
#include <iterator>
#include <stdlib.h>
#include <ctime>
#include<algorithm>

using namespace  std;


int main()
{
    srand(time(NULL));
	int n = 10; // кількість елементів
	//////////1. Задано масив. Скласти програму розрахунку квадратного кореня з будь-якого елементу масиву;
   

    vector <int> nums;  
    vector <double> sqrts; 

    for (auto i = 0; i < n; i++)
        nums.push_back(rand() % 100);
    cout << "Numbers: " << endl;
    for (auto num : nums)
        cout << num << "\t";

    sqrts.reserve(n);
    for (auto i = 0; i < n; i++)
        sqrts.push_back(sqrt(nums[i]));
    cout << endl << "sqrt values:" << endl;
    for (auto num : sqrts)
        cout << num << "\t";
	
    cout << endl;
    system("pause");
    system("cls");
    //////////////2. Задано масив з парного числа елементів. Поміняти місцями перший елемент з другим, третій, - з четвертим і т.д.;
    cout << "Before : " << endl;
    for (auto num : nums)
        cout << num << "\t";
    for (int i = 0; i < n - 1; i += 2)
        swap(nums[i], nums[i + 1]);
	
    cout << endl << "After : " << endl;
    for (auto num : nums)
        cout << num << "\t";
    cout << endl;
    system("pause");
    system("cls");
    /////////////3. У масиві є тільки два однакових елементи. Знайти їх.
    vector<int> numbers={0,1,7,2,3,4,5,6,1,8};

    cout << "Numbers: " << endl;
    for (auto num : numbers)
        cout << num << "\t";
    cout << endl;
    sort(numbers.begin(), numbers.end());

        for (auto i = 0; i < n - 1; i++)
        {
	        if (numbers[i] == numbers[i + 1])
            {
	            cout << endl << "this is: " << numbers[i] << endl;
            }           
        }

	
return 0;
}