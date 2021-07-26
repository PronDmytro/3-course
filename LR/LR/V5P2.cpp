#include <iostream>
#include <time.h>
using namespace std;

void main(){
	int N = 0, maxM = 0;
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
			if(*(*(arr + i) + j) > *(*(arr + N) + maxM)) maxM = j; N=i;
		}
		
	}
	
	for(int j = 0; j < m; j++){
			*(*(arr + N) + j) = 1;
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