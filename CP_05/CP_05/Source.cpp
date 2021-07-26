#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace  std;

int main()
{
    using container = vector<int>;
    using crit = container::const_reverse_iterator;
    container a = { 2, 3, 4, 5, 1, 6, 7, 8, 9, 5 }, b;
    cout << "¹2\nDo:    ";
    for (auto num : a)
        cout << num << "\t";
    auto pairIt = minmax_element(a.cbegin(), a.cend());
    if (pairIt.second < pairIt.first)
        swap(pairIt.first, pairIt.second);
    ++pairIt.second;
    copy(a.cbegin(), pairIt.first, back_inserter(b));
    copy(crit(pairIt.second), crit(pairIt.first), back_inserter(b));
    copy(pairIt.second, a.cend(), back_inserter(b));
    cout << endl << "Potim: ";
    copy(b.cbegin(), b.cend(), ostream_iterator<int>(cout, "\t"));
}