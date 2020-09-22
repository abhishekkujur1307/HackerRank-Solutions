#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n], x[t], y[t];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < t; j++)
    {
        cin >> x[j] >> y[j];
        int min = a[x[j]];
        for (int k = 0; k < y[j] - x[j]; k++)
        {
            if (a[x[j] + k + 1] < min)
            {
                min = a[x[j] + 1 + k];
            }
        }
        cout << min << endl;
    }
    return 0;
}
