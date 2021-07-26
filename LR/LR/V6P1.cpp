#include <iostream>
#include <time.h>
using namespace std;

void main(){
	const int n = 10;
	int arr[n];
	int m;
	int k;
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}
	cout << "Enter k: ";
	cin >> k;
	cout << "Enter m: ";
	cin >> m;
	if(m <= n - k){
		cout << "Array after:" << endl;
		int k1 = k;
		while(k1 != 0){
			for(int i = m; i < n; i++){
				*(arr + i) = *(arr + i + 1);
			}
			k1--;
		}
	}

	for(int i = 0; i < n - k; i++){
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	system("pause");
}