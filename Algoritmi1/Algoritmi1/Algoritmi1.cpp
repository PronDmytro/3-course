#include <iostream>
#include <ctime>
#include <iomanip>
#include<Windows.h>

using namespace std;
void insertion_sort(int*,  int);
void fill_array(int*,  int);
void print_array(int*,  int);
int search_binary(int [], int, int, int);
int count_delete_elements();
void delete_elements(const int*, int*,  int);

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    auto S = 75;

    auto array = new int[S];
	
    fill_array(array, S);
	
    cout << "Before: " << endl;
    print_array(array, S);
	
    auto N = S - count_delete_elements();
	auto sorted_array = new int[N];
    delete_elements(array, sorted_array, S);

    cout << "After delete: " << endl;
    print_array(sorted_array, N);

    insertion_sort(sorted_array, N);

    cout << endl << "After sort: " << endl;
    print_array(sorted_array, N);
    cout << endl;
	
    int key, index = -1;
    cout << "Введіть число котре потрібно знайти: ";
    cin >> key;

    index = search_binary(sorted_array, 0, N, key);

    if (index >= 0)
        cout << "Вказанное число знаходиться в комірці з індексом: " << index << "\n\n";
    else
        cout << "В масиві немає такого числа!\n\n";

    delete[] sorted_array;
    system("pause");
    return 0;
}

void insertion_sort(int* array_ptr, const int length)
{
    for (int counter = length - 2, item, tmp; counter >= 0; --counter) {
        item = counter, tmp = array_ptr[counter];
        while (item < length - 1 && tmp < array_ptr[item + 1])
        {
			array_ptr[item] = array_ptr[item + 1];
	        item++;
        
        }
        array_ptr[item] = tmp;
    } 
}
void fill_array(int* array_ptr, const int length)
{
    for (auto counter = 0; counter < length; counter++) {
        array_ptr[counter] = rand() % 100;
    }
}
void print_array(int* array_ptr, const int length)
{
    for (auto counter = 0; counter < length; counter++)
    {
        cout << setw(2) << array_ptr[counter] << "  ";
    }
    cout << endl;
}
int search_binary(int arr[], int left, int right, int key)
{
    int midd = 0;
    while (true)
    {
        midd = (left + right) / 2;
       
        if (key > arr[midd])       // если искомое меньше значения в ячейке
            right = midd - 1;      // смещаем правую границу поиска
        else if (key < arr[midd])  // если искомое больше значения в ячейке
            left = midd + 1;    // смещаем левую границу поиска
        else                       // иначе (значения равны)
            return midd;           // функция возвращает индекс ячейки

        if (left > right)          // если границы сомкнулись 
            return -1;
    }
}
int count_delete_elements()
{
	auto count = 0;
    for (auto counter = 17; counter <= 27; counter++)
    {
        if (counter != 0)
        {
            count++;
        }
    }
    return count;
}
void delete_elements(const int* array_ptr, int* second_array_ptr, const int length)
{
	auto second_counter = 0;
    for (auto counter = 0; counter < length; counter++)
    {
        if (counter <= 16)
        {
            second_array_ptr[second_counter] = array_ptr[counter];
            second_counter++;
        }
        if (27 >= counter > 16 && counter % 2 == 0 || counter > 27)
    	{
                second_array_ptr[second_counter] = array_ptr[counter];
                second_counter++;
    	}

    }
}