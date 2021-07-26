#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void add_elements(vector<int>& dest, const vector<int>& source, int index)
{
    for (; index < source.size(); index++)
    {
        dest.push_back(source[index]);
    }
}

void print_vector(const vector<int>& vec, const int M, vector<int>& sum)
{
	auto suma = 0;
    for (auto i = 1, j = 0; i <= vec.size(); i++)
    {
    	cout << vec[i-1] << ' ';
        suma += vec[i-1];
    	if((i % M == 0 && i != 0) )
    	{
            sum[j] = suma;
            j++;
            suma = 0;

            cout << endl;
    	}
    }
    cout << endl;
}

void fill_vector( vector<int>& vec, const int M, const int N)
{
    int n;
    for (auto i = 0; i < vec.size(); i++)
    {
        vec[i] = rand() % 10;
    }
   
 }

int main()
{
    srand(time(NULL));
    const int M = 5, N = 3;
    vector<int> B(M*N), A(M*N);
    vector<int> C;
    vector<int> sum_A(N);
    vector<int> sum_B(N);
    auto a = 0, b = 0;

    fill_vector(A, M, N);
    fill_vector(B, M, N);


	
    cout << "Vector A:" << endl;
    print_vector(A,M, sum_A);
    cout << "Sum:" << endl;
    for (auto i = 0; i < N; i++)
    {
        cout << i + 1 << " column - " << sum_A[i] << endl;
    }
    
    cout << "Vector B:" << endl;
    print_vector(B,M, sum_B);
    cout << "Sum:" << endl;
    for (auto i = 0; i < N; i++)
    {
        cout << i + 1 << " column - " << sum_B[i] << endl;
    }
    sort(sum_A.begin(), sum_A.end());
    sort(sum_B.begin(), sum_B.end());
    while (a < sum_A.size() && b < sum_B.size())
    {
        if (sum_A[a] < sum_B[b])
        {
            C.push_back(sum_A[a]);
            ++a;
        }
        else
        {
            C.push_back(sum_B[b]);
            ++b;
        }
    }
    if (a == A.size())
        add_elements(C, sum_B, b);
    else
        add_elements(C, sum_A, a);

    cout << "Result vector:" << endl;
    for (auto i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
    return 0;
}