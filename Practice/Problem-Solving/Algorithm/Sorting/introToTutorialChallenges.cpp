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
    int b, n;
    cin >> b >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
