#include <iostream>
#include <time.h>
using namespace std;

void main(){
	const int n = 10;
	int arr[n];
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}

	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k;){
		if (*(arr + i) % 2 == 0){
			for(int j = i; j < (k - 1); j++){
				*(arr + j) = *(arr + j + 1);
			}
			k--;
		} else{ 
			cout << *(arr + i) << "\t";
			i++;
		}
	}
	cout << endl;
	system("pause");
}