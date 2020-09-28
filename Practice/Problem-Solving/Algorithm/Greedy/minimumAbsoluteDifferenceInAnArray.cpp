#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <utility>

#define ll long long

using namespace std;

int main()
{
    int n, min = 1000000000;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        ll diff;
        diff = abs(a[i] - a[i + 1]);
        if (i == n - 1)
        {
            diff = abs(a[i] - a[0]);
        }
        if (diff < min)
        {
            min = diff;
        }
    }
    cout << min;
    return 0;
}
