#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int N = 7, M = 8;
    int min, index;
    srand(time(NULL));
    auto a = new int[N * M];
    for (auto i = 0; i < N; i++) {
        for (auto j = 0; j < M; j++) {
            a[i * M + j] = rand() % 100;
        }
    }
    for (auto i = 0; i < N * M; i++) {
        min = INT_MAX;
        for (auto j = i; j < N * M; j++) {
            if (a[j] < min) {
                min = a[j];
                index = j;
            }
        }
        for (auto j = index; j >= i; j--) {
            a[j] = a[j - 1];
        }
        a[i] = min;
    }
    cout << "Target matrix:\n";
    for (auto i = 0; i < N; i++) {
        for (auto j = 0; j < M; j++) {
            cout << a[i * M + j] << "\t";
        }
        cout << "\n";
    }
    delete[] a;

    system("pause");
    return 0;
}
