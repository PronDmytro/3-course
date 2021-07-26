#include <iostream>
#include <vector>

using namespace std;

void add_elements(vector<int>& dest, const vector<int>& source, int index)
{
    for (; index < source.size(); index++)
    {
        dest.push_back(source[index]);
    }
}

void print_vector(const vector<int>& vec)
{
    for (auto i : vec)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> B = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }, A = { 0, 1, 2, 3, 6, 7 };
    vector<int> C;
    int a = 0, b = 0;

    cout << "Vector A:" << endl;
    print_vector(A);
    cout << "Vector B:" << endl;
    print_vector(B);
	
    while (a < A.size() && b < B.size())
    {
        if (A[a] < B[b])
        {
            C.push_back(A[a]);
            ++a;
        }
        else
        {
            C.push_back(B[b]);
            ++b;
        }
    }
    if (a == A.size())
        add_elements(C, B, b);
    else
        add_elements(C, A, a);
	
    cout << "Vector C:" << endl;
	
    print_vector(C);
}