// ReSharper disable StringLiteralTypo
#include <iostream>
#include <iomanip>
using namespace std;
int f(int a) {
    int m = 0, k=0;
    if (a == 0) {
        return 0;
    }
    k += m * 10;
    m = a % 10;
    cout << m;
    f(a / 10);
}
void getPosSecOfTime(int h, int m, int s, int ms, int* posh, int* posm)
{
    int hx = h * 60 * 60 * 1000, mx = m * 60 * 1000, sx = s * 1000, msx = ms;
    *posh = hx + mx + sx + msx;
    *posm = m * 720000 + s * 12000 + ms * 12;
}
int main()
{
    int a, b;
    cout << "Enter coutn of metrs" << endl;
    cin >> a;
    b = a / 1000;

    cout << a << " metrs = " << b << " kilometrs" << endl;

    system("pause");
    system("cls");
	
	int n;
    cout << "Enter n" << endl;
    cin >> n;
    f(n);
    cout << endl;
    system("pause");
    system("cls");


    int h, m, diff = 0;
    cout << "Enter h" << endl;
    cin >> h ;
    cout << "Enter m" << endl;
    cin >> m;
    if (h > 12) h -= 12;

    h * 5 >= m ? diff = h * 5 - m : diff = 65 - (m - h * 5);

    cout << diff << " minutes" << endl;
    system("pause");
    return 0;
  
}

