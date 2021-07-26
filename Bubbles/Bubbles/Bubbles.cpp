#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    
	const auto N = 5, M = 6;
	int arr[N][M];
    int arr_sum[M];
    auto sum = 0;
    int temp;

    int digitals[N]{ 25,37,0,10,2 };
    cout << "Before:" << endl;
    for (auto i = 0; i < N; i++) {
        cout << digitals[i] << "\t";
    }
    for (auto i = 0; i < N; i++) {
        for (auto j = 0; j < N-1; j++) {
            if (digitals[j] > digitals[j + 1]) {
	            auto b = digitals[j]; // создали дополнительную переменную
                digitals[j] = digitals[j + 1]; // меняем местами
                digitals[j + 1] = b; // значения элементов
            }
        }
    }
    cout << endl << "After:" << endl;
    for (auto i = 0; i < N; i++) {
        cout << digitals[i] << "\t";
    }
    cout << endl;
    system("pause");
    system("cls");
	for (auto& i : arr)
	{
		for (auto& j : i)
		{
			j = rand() % 10;
		}
	}
    cout << "Before:" << endl;
    for (auto i = 0; i < N; i++)
    {
        for (auto j = 0; j < M; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    //Сортируем массив
    for (auto c = 0; c <= (N *M); c++)//колличество проходов
    {
        //в строках упорядочиваем
        for (auto i = 0; i < N; i++)
        {
            for (auto j = 0; j < M - 1; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
        //в столбах упорядочиваем
        for (auto i = 0; i < M; i++)
        {
            for (auto j = 0; j < N - 1; j++)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    temp = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = temp;
                }
            }
        }
    }
    cout << endl << "After:" << endl;
    for (auto i = 0; i < N; i++)
    {
        for (auto j = 0; j < M; j++)
        {
            sum += arr[i][j];
        	cout << arr[i][j] << "\t";
        }
        arr_sum[i] = sum;
        cout << endl;
        sum = 0;
    }
    cout << "Sum:" << endl;
    for (auto i = 0; i < N; i++)
    {
        cout <<i+1<<" column - " <<arr_sum[i] << endl;
    }
	
	return 0;
	
}

