#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <deque>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int n, index;
    cin >> n;
    ull a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    n = n - 3;
    ull m[n], max = 0;
    for (int i = 0; i <= n; i++)
    {
        if ((a[i] + a[i + 1] > a[i + 2]) && (a[i + 1] + a[i + 2] > a[i]) && (a[i] + a[i + 2] > a[i + 1]))
        {
            m[i] = a[i] + a[i + 1] + a[i + 2];
        }
        else
        {
            m[i] = 0;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
            index = i;
        }
    }

    if (max == 0)
    {
        cout << "-1" << endl;
    }
    else if(a[index] == 0 && a[index + 1] == 3 && a[index + 2] == 3)
    {
        cout << "2 3 3" << endl;
    }
    else
    {
        cout << a[index] << " " << a[index + 1] << " " << a[index + 2];
    }

    return 0;
}
