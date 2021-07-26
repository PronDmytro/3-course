#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void insertion_sort(int*, int);
void fill_array(int*, int);

int main(int argc, char* argv[])
{
	int sizes[5]{ 20, 1000, 5000, 10000, 50000};
	for (auto i = 0; i < 5; i++)
	{

		auto size_array = sizes[i];

		auto sorted_array = new int[size_array];
		fill_array(sorted_array, size_array);
		for (auto counter = 0; counter < size_array; counter++)
		{
			cout << setw(2) << sorted_array[counter] << "  ";
		}
		cout << "Size: "<<size_array << endl;
		clock_t t = clock();
		insertion_sort(sorted_array, size_array);
		cout << (static_cast<double>(clock() - t) / CLOCKS_PER_SEC) << endl;
		for (auto counter = 0; counter < size_array; counter++)
		{
			cout << setw(2) << sorted_array[counter] << "  ";
		}
		
		cout << endl;
		system("pause");
		delete[] sorted_array;
	}
	return 0;
}

void insertion_sort(int* array_ptr, const int length)
{
	int temp, item;
	unsigned long long int count_if = 0, count_per = 0;
	for (auto counter = 1; counter < length; counter++)
	{
		temp = array_ptr[counter];
		item = counter - 1;
		while (item >= 0 && array_ptr[item] > temp)
		{
			array_ptr[item + 1] = array_ptr[item];
			array_ptr[item] = temp;
			item--;
			count_if++;
			count_per++;
		}
	}
	cout << count_if << "|" << count_per<<endl;
}
void fill_array(int* array_ptr, const int length)
{
	for (auto counter = 0; counter < length; counter++)
	{
		array_ptr[counter] = rand() % 100;
	}
}