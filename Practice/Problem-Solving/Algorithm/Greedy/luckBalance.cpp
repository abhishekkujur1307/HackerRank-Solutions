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
    int n, k, x, y, sum = 0, count = 0, minus = 0;
    cin >> n >> k;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> y;
        sum += a[i];
        if (y == 1)
        {
            count++;
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < count - k; i++)
    {
        minus += v[i];
    }
    minus *= 2;
    cout << sum - minus;
    return 0;
}
