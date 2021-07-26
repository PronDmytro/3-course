#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void insertion_sort(int*, int); 

int main(int argc, char* argv[])
{
    auto size_array = 6; 
  
    auto sorted_array = new int[size_array]{4,13,-3,6,-8,24}; 
    cout << "Before: " << endl;
    for (auto counter = 0; counter < size_array; counter++)
    {
        cout << setw(2) << sorted_array[counter] << "  "; 
    }

    insertion_sort(sorted_array, size_array); 
	
    cout << endl << "After: " << endl;
    for (auto counter = 0; counter < size_array; counter++)
    {
        cout << setw(2) << sorted_array[counter] << "  ";
    }
    cout << endl;
	delete[] sorted_array;
    system("pause");
    return 0;
}

void insertion_sort(int* array_ptr, const int length)
{
    int temp, item; 
    for (int counter = 1; counter < length; counter++)
    {
        temp = array_ptr[counter]; 
        item = counter - 1; 
        while (item >= 0 && array_ptr[item] > temp) 
        {
            array_ptr[item + 1] = array_ptr[item];
            array_ptr[item] = temp;
            item--;
        }
    }
}