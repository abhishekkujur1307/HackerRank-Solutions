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
    int n;
    ull k, sum = 0, count = -1;
    cin >> n >> k;
    ull a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i<n; i++)
    {
        if(sum > k)
        {
            break;
        }
        count++;
        sum += a[i];
    }
    cout << count;
    return 0;
}
