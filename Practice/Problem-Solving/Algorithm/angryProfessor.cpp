#include <iostream>

using namespace std;

int main()
{
    int t, n, k, a;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int count = 0;
        cin >> n >> k;
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            if (a <= 0)
            {
                count++;
            }
        }
        cout << (k > count ? "YES" : "NO") << endl;
    }
    return 0;
}
