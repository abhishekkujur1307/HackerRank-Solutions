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
    int n;
    ll x = 1, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * x;
        x *= 2;
    }
    cout << sum;
    return 0;
}
