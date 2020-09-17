#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        unsigned long long m, n, s;
        cin >> m >> n >> s;
        cout << (((n + s - 1) % m == 0) ? m : ((n + s - 1) % m)) << endl;
    }
    return 0;
}
