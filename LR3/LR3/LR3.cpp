#include <iostream>
#include <iomanip>
#include<Windows.h>
#include <ctime>
using namespace std;
void insertion_sort(int* array_ptr, const int length)
{
    for (int counter = length - 2, item, tmp; counter >= 0; --counter) {
        item = counter, tmp = array_ptr[counter];
        for (; item < length - 1 && tmp > array_ptr[item + 1]; ++item) {
            array_ptr[item] = array_ptr[item + 1];
        }
        array_ptr[item] = tmp;
    }
}
void fill_arr(int array[], const int length)
{
    for (auto counter = 0; counter < length; counter++)
    {
        array[counter] = rand() % 100;
    }
}
int search_binary(int arr[], int left, int right, int key)
{
    int midd = 0;
    while (true)
    {
        midd = (left + right) / 2;
        cout << arr[midd] - '0';
        if (key < arr[midd]-'0')       // если искомое меньше значения в ячейке
            right = midd - 1;      // смещаем правую границу поиска
        else if (key > arr[midd]-'0')  // если искомое больше значения в ячейке
            left = midd + 1;    // смещаем левую границу поиска
        else                       // иначе (значения равны)
            return midd;           // функция возвращает индекс ячейки

        if (left > right)          // если границы сомкнулись 
            return -1;
    }
}
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	
    int size_array;

    cout << "Введіть кількість елементів " << endl;
    cin >> size_array;

    auto sorted_array = new int[size_array];
    fill_arr(sorted_array, size_array);
	
    cout << endl << "Before: " << endl;
    for (auto counter = 0; counter < size_array; counter++)
    {
        int num = sorted_array[counter] - '0';
        cout << setw(2) << num << "  ";
    }

    insertion_sort(sorted_array, size_array);

    cout << endl << "After: " << endl;
    for (auto counter = 0; counter < size_array; counter++)
    {
        int num = sorted_array[counter] - '0';
        cout << setw(2) << num << "  ";
    }
    cout << endl;
    system("pause");
    system("cls");

	
    int key, index = -1;
	cout << "Введіть число котре потрібно знайти: ";
    cin >>  key;

    index = search_binary(sorted_array, 0, size_array, key);

    if (index >= 0)
        cout << "Вказанное число знаходиться в комірці з індексом: " << index << "\n\n";
    else
        cout << "В масиві немає такого числа!\n\n";

    for (auto counter = 0; counter < size_array; counter++)
    {
        int num = sorted_array[counter] - '0';
        cout << setw(2) << num << "  ";
    }

	delete[] sorted_array;
    return 0;
}
