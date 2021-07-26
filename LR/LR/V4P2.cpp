#include <iostream>
#include <time.h>
using namespace std;

void main(){
	int minN = 0, minM = 0;
	const int n = 5;
	const int m = 5;
	int arr[n][m];
	srand(time(NULL));

	cout << "Matrix before:" << endl;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			*(*(arr + i) + j) = rand() % 10;
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}

	for(int i = 0; i < n; i++){
		for(int j = 1; j < m; j++){
			if(*(*(arr + i) + j) > *(*(arr + i) + minM)) minM = j;
		}
		minN = *(*(arr + i) + 0);
		*(*(arr + i) + 0) = *(*(arr + i) + minM);
		*(*(arr + i) + minM) = minN;
		minM = 0;
	}

	cout <<  "Matrix after:" << endl;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
}