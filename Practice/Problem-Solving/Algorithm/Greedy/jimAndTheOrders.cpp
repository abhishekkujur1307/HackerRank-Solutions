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
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b, t;
        cin >> a >> b;
        t = a + b;
        v.push_back(make_pair(t, i + 1));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << " ";
    }
    return 0;
}
