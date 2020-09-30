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
    int n, d = 1, e = 1;
    ll sum = 0;
    cin >> n;
    ll a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[0] = 1;
        if (a[i] > a[i - 1])
        {
            d++;
        }
        else
        {
            d = 1;
        }
        b[i] = d;
    }
    for (int i = n - 2; i >= 0; --i)
    {
        c[n - 1] = 1;
        if (a[i + 1] < a[i])
        {
            e++;
        }
        else
        {
            e = 1;
        }
        c[i] = e;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > c[i])
        {
            sum += b[i];
        }
        else
        {
            sum += c[i];
        }
    }
    cout << sum;
    return 0;
}
