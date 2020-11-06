#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iterator>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v.at(i);
    }
    cout << accumulate(v.begin(), v.end(), 0L, bit_xor<int>()) << endl;
    return 0;
}
