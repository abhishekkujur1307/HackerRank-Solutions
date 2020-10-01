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
    int n, k, i, b, value = 100000000;
    cin >> n >> k;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    b = n / k;
    for (i = 0; i <= n - k; i++)
    {
        if (a[k + i - 1] - a[i] < value)
        {
            value = a[k + i - 1] - a[i];
        }
    }
    cout << value;
    return 0;
}
