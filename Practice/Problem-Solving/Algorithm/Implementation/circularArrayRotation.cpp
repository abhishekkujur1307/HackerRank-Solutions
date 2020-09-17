#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <deque>

#define ll long long

using namespace std;

int main()
{
    deque<int> d;
    int n, k, q, x;
    cin >> n >> k >> q;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        d.push_back(x);
    }
    for (int i = 0; i < k; ++i)
    {
        d.push_front(d.at(n - 1));
        d.pop_back();
    }
    for (int i = 0; i < q; ++i)
    {
        int m;
        cin >> m;
        cout << d[m] << endl;
    }
    return 0;
}
