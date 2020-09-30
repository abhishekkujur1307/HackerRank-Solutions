#include <iostream>
#include <functional>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <utility>
#include <deque>

#define ll long long

using namespace std;

int main()
{
    int n, x, y = -1, count = 0;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        d.push_back(x);
    }
    sort(d.begin(), d.end());
    for (int i = 0; i < n; i++)
    {
        i = 0;
        if (d[i] > y)
        {
            y = d[i] + 4;
            count++;
        }
        else
        {
            d.pop_front();
        }
        if (d.size() == 0)
        {
            break;
        }
    }
    cout << count;
    return 0;
}
