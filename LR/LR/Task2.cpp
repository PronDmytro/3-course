#include "task2Func.h"
void t2v1()
{
		int maxN = 0, maxM = 0;
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
		maxN = *(*(arr + i) + 0);
		*(*(arr + i) + 0) = *(*(arr + i) + maxM);
		*(*(arr + i) + maxM) = maxN;
		maxM = 0;
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
void t2v2()
{
		int minN = 0, minM = 0, lastM = 0;
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
		for(int j = 0; j < m; j++){
			if(*(*(arr + i) + j) < *(*(arr + i) + minM)) minM = j;
		}
		minN = *(*(arr + i) + m-1);
		lastM = *(*(arr + i) + minM);
		*(*(arr + i) + minM) = minN;
		*(*(arr + i) + m-1) = lastM;
		
		minM = 0;
		lastM=0;
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
void t2v3()
{
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
void t2v4()
{
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
void t2v5()
{
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
void t2v6()
{
	int N = 0, minM = 0, lastM = 0;
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
			if(*(*(arr + i) + j) < *(*(arr + i) + minM)) minM = j; N = i;
		}
		
	}
	for(int i = 0; i < n; i++){
		*(*(arr + N) + minM)=0;
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
void t2v7()
{
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
		for(int j = 0; j < m; j++){
			if(*(*(arr + i) + j)== 1)
			{
				for(int k = 0; k < m; k++){
				*(*(arr + i) + k) = 0;
				}
				break;
			}
		}
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
void t2v8()
{

}
void t2v9()
{

}
void t2v10()
{

}