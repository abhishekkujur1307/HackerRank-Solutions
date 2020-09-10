#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <deque>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int> v(5, 0);
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            v[0] += 1;
        }
        else if (x == 2)
        {
            v[1] += 1;
        }
        else if (x == 3)
        {
            v[2] += 1;
        }
        else if (x == 4)
        {
            v[3] += 1;
        }
        else
        {
            v[4] += 1;
        }
    }
    int max = 0;
    for (i = 0; i < 5; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (max == v[i])
        {
            max = i + 1;
            break;
        }
    }
    cout << max;
    return 0;
}
