#include <iostream>
#include <time.h>
using namespace std;

void main(){
	const int n = 10;
	int arr[n];
	int k = 0;
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
		if (*(arr + i) < *(arr + k)) 
			k = i;
	}

	if(k < n - 1){
		cout << "Array after:" << endl;
		for(int i = k; i < n; i++){
			*(arr + i) = *(arr + i + 1);
		}
	}

	for(int i = 0; i < n - 1; i++){
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	system("pause");
}