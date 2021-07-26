#include <iostream>
#include <time.h>
using namespace std;

void main(){
	const int n = 10;
	int arr[n];
	int srednee = 0;
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
		srednee += *(arr + i);
	}
	srednee /= 10;
	cout << "Srednee = " << srednee << endl;
	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k;){
		if (*(arr + i) > srednee){
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