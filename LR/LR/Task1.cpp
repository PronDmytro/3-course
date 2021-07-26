#include "task1Func.h"


void t1v1()
{
 
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
void t1v2()
{
 
	int arr[n];
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}

	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k; i++){
		if (i % 2 == 0)	
			*(arr + i) = *(arr + i + 1);
		else 
			cout << *(arr + i) << "\t";
	}
	cout << endl;
	system("pause");
}
void t1v3()
{
 
	int arr[n];
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}

	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k;){
		if (*(arr + i) % 2 != 0){
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
void t1v4()
{
 
	int arr[n];
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}

	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k; i++){
		if (i % 2 != 0)	
			*(arr + i) = *(arr + i + 1);
		else 
			cout << *(arr + i) << "\t";
	}
	cout << endl;
	system("pause");
}
void t1v5()
{
 
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
void t1v6()
{
 
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
void t1v7()
{
 
	int arr[n];
	int k;
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
	}
	cout << "Enter k: ";
	cin >> k;
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
void t1v8()
{
 
	int arr[n];
	int k = 0;
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 10;
		cout << *(arr + i) << "\t";
		if (*(arr + i) > *(arr + k)) 
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
void t1v9()
{
 
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
void t1v10()
{
 
	int arr[n];
	srand(time(NULL));

	cout << "Array before:" << endl;

	for(int i = 0; i < n; i++){
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << "\t";
	}

	cout << "Array after:" << endl;

	for(int i = 0, k = n; i < k;){
		if (*(arr + i) > 9){
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