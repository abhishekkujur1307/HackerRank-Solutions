#include <iostream>

using namespace std;

int main()
{
    int n, d, b;
    cin >> n >> d;
    int a[n];
    b = n - d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i + d < n)
        {
            cout << a[i + d] << " ";
        }
        else
        {
            cout << a[i - b] << " ";
        }
    }
    return 0;
}
