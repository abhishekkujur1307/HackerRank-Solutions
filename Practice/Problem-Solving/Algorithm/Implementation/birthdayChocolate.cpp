#include <iostream>

using namespace std;

int main()
{
    int n, d, m, sum = 0, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> d >> m;
    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i + j];
        }
        if (sum == d)
        {
            count++;
        }
        sum = 0;
    }

    cout << count << endl;
    return 0;
}
