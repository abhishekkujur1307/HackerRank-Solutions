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
    int q, n, i, j, k;
    string s;
    cin >> q;
    for (i = 0; i < q; i++)
    {
        ll sum = 0;
        cin >> s;
        if (s.length() == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            n = s.length() / 2;
            k = s.length() - 1;
            for (j = 0; j < n; j++)
            {
                sum += abs(s[j] - s[k]);
                k--;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
