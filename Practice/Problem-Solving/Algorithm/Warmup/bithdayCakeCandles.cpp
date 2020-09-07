#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <utility>

#define ll long long

using namespace std;

int main()
{
    ll n, max, count = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = *max_element(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
