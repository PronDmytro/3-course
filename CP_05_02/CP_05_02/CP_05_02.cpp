#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void print(const vector<vector<int>>& ises)
{
    for_each(ises.begin(), ises.end(), [](vector<int> ivec)
        {
            for_each(ivec.begin(), ivec.end(), [](int i)
                {
                    cout << left << "\t" << i;
                });
            cout << endl;
    });
}

int main()
{
	/////////1
	///Заповнити двовимірний масив розміром 7x7 
    const auto row = 7;
    const auto col = 7;
    vector<vector<int> > imatrix(row);
	
    for (auto i = 0; i < row; i++)
    {
        imatrix[i].resize(col);
        for (auto j = 0; j < col; j++)
        {
            if (i == j)
                imatrix[i][j] = 1;
            else if (i == 6 - j)
                imatrix[i][j] = 1;
            else
                imatrix[i][j] = 0;
        }
    }
    print(imatrix);
    system("pause");
    for (auto i = 0; i < row; i++)
    {
        imatrix[i].resize(col);
        for (auto j = 0; j < col; j++)
        {
            if (i == 3)
                imatrix[i][j] = 1;
            else if (j == 3)
                imatrix[i][j] = 1;
        }
    }
    print(imatrix);
    system("pause");
    for (auto i = 0; i < row; i++)
    {
        imatrix[i].resize(col);
        for (auto j = 0; j < col; j++)
        {
            if (i <= 3)
            {
                if (i <= j && j <= col - 1 - i)
                    imatrix[i][j] = 1;
                else
                    imatrix[i][j] = 0;
            }
            else
            {
                if (col - 1 - i <= j && j <= i)
                    imatrix[i][j] = 1;
                else
                    imatrix[i][j] = 0;
            }
        }
    }
    print(imatrix);
    system("pause");
    system("cls");
	
    /////////2
	///Дано двовимірний масив Знайти число пар однакових сусідніх елементів.
	///Як сусідні розглядати  тільки елементи, розташовані в одному рядку.
	auto count = 0;
    for (auto i = 0; i < row; i++)
    {
        imatrix[i].resize(col);
        for (auto j = 0; j < col; j++)
            imatrix[i][j] = rand() % 10;
    }
	 print(imatrix);
    for (auto i = 0; i < row; i++)
    {
        imatrix[i].resize(col);
        for (auto j = 0; j < col-1; j++)
        {
            if (imatrix[i][j] == imatrix[i][j + 1])
                count++;
        }
        cout << "str №" << i << ": " << count << endl;
        count = 0;
    }
    system("pause");
    system("cls");
	
    /////////3
	///Задано двовимірний масив Видалити рядок і стовпець,
	///на перетині яких розташований найменший по модулю елемент масиву.
    vector<vector<int> > imatrix2(row);
    imatrix2 = imatrix;
	
    auto min_i = 0, min_j = 0;
    for (auto i = 0; i < row; i++)
        for (auto j = 0; j < col; j++)
            if (imatrix[i][j] < imatrix[min_i][min_j])
            {
                min_i = i; min_j = j;
            }

    imatrix.clear();
    imatrix.resize(row - 1);
    for (auto i = 0; i < row-1; i++)
    {
        imatrix[i].resize(col-1);
        for (auto j = 0; j < col-1; j++)
        {
            if (i == min_i)
                break;

            if (j < min_j && i < min_i)
                imatrix[i][j] = imatrix2[i][j];
            else if (j >= min_j && i < min_i)
                imatrix[i][j] = imatrix2[i][j + 1];
            else if (j< min_j && i > min_i)
                imatrix[i - 1][j] = imatrix2[i][j];
            else if (j >= min_j && i > min_i)
                imatrix[i-1][j] = imatrix2[i][j+1]; 
        }
    }

    cout << "Before: " << endl;
	print(imatrix2);
    cout << "After: " << endl;
    print(imatrix);

    system("pause");
    system("cls");
    return 0;
}
