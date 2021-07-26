#include <algorithm> 
#include <iostream> 

using namespace std;

int main()
{
	const int length = 6;
	int array[length] = { 20, 1, 30, 2, 7, 5 };

	for (auto start_index = 0; start_index < length - 1; ++start_index)
	{
		auto smallest_index = start_index;
		for (auto current_index = start_index + 1; current_index < length; ++current_index)
		{
			if (array[current_index] < array[smallest_index])
				smallest_index = current_index;
		}
		swap(array[start_index], array[smallest_index]);
	}

	for (auto index = 0; index < length; ++index)
		cout << array[index] << ' ';

	cout << endl;
	system("pause");


;
	const int weight = 4, height = 7;
	auto iSize = weight * height;
	auto ppArray = new int [iSize];

	for (auto i = 0; i < height; i++)
	{
		for (auto j = 0; j < weight; j++)
		{
			ppArray[i * weight + j] = rand() % 100;
		}
	}

	cout << "Before:" << endl;
	for (auto i = 0; i < height; i++) {
		for (auto j = 0; j < weight; j++) {
			cout << ppArray[i * weight + j] << "\t";
		}
		cout << endl;
	}

		for (auto start_index = 0; start_index < iSize - 1; ++start_index)
		{
			auto smallest_index = start_index;
			for (auto current_index = start_index + 1; current_index < iSize; ++current_index)
			{
				if (ppArray[current_index] < ppArray[smallest_index])
					smallest_index = current_index;
			}
			swap(ppArray[start_index], ppArray[smallest_index]);
		}
	
	
	auto sum = 0;
	int arr_sum[height];
	cout << endl << "After:" << endl;
	for (auto i = 0; i < height; i++) {
		for (auto j = 0; j < weight; j++) {
			sum += ppArray[i * weight + j];
			cout << ppArray[i * weight + j] << "\t";
		}
		arr_sum[i] = sum;
		cout << endl;
		sum = 0;
	}

	cout << "Sum:" << endl;
	for (auto i = 0; i < height; i++)
	{
		cout << i + 1 << " column - " << arr_sum[i] << endl;
	}


	
	return 0;
}