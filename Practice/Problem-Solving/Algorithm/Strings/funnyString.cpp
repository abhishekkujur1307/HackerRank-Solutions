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
    int t;
    cin >> t;
    while (t--)
    {
        bool check = true;
        string s;
        cin >> s;
        int n, i, j = 0;
        n = s.length();
        int a[n - 1], b[n - 1];
        for (i = 0; i < n - 1; i++)
        {
            a[i] = abs(s[i + 1] - s[i]);
        }
        for (i = n - 2; i >= 0; i--)
        {
            b[j] = abs(s[i + 1] - s[i]);
            j++;
        }
        for (i = 0; i <= n - 2; i++)
        {
            if (a[i] != b[i])
            {
                check = false;
                break;
            }
        }
        cout << ((check) ? "Funny" : "Not Funny") << endl;
    }
    return 0;
}
