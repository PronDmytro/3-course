#include <ctime>
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
void fill_vector(vector<int>& vec)
{
    for (auto i = 0; i < vec.size(); i++)
    {
        vec[i] = rand() % 10;
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
    vector<int> sizes = { 20, 1000, 5000, 10000, 50000 };
    
   
    int a = 0, b = 0;
    for (auto i = 0; i < 5; i++)
    {
    	vector<int> B(sizes[i]) , A(sizes[i]);
    	vector<int> C;
		unsigned long long int count_if = 0, count_per = 0;
		fill_vector(A);
		fill_vector(B);
		cout << "Vector A:" << endl;
		print_vector(A);
		cout << "Vector B:" << endl;
		print_vector(B);
		clock_t t = clock();
	    while (a < A.size() && b < B.size())
	    {
	    	count_if+=2;
			count_if++;
	        if (A[a] < B[b])
	        {
	            C.push_back(A[a]);
				count_per++;
	            ++a;
				
	        }
	        else
	        {
	            C.push_back(B[b]);
				count_per++;
	            ++b;
	        }
	    }
		count_if++;
		if (a == A.size())
		{
			add_elements(C, B, b); count_per++;
		}
		else
		{
			add_elements(C, A, a); count_per++;
		}
		cout << (static_cast<double>(clock() - t) / CLOCKS_PER_SEC) << endl;
		cout << count_if << "|" << count_per << endl;
		cout << "Vector C:" << endl;

		print_vector(C);
		system("pause");
    }
    
}