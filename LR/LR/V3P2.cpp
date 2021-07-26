#include <iostream>
#include <time.h>
using namespace std;

void main(){
	int maxN = 0,maxM = 0, lastM=0;
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
			if(*(*(arr + i) + j) > *(*(arr + i) + maxM)) maxM = j;
		}
		maxN = *(*(arr + i) + m-1);
		lastM = *(*(arr + i) +maxM);
		*(*(arr + i) + maxM) = maxN;
		*(*(arr + i) + m-1) = lastM;
		
		maxM = 0;
		lastM = 0;
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