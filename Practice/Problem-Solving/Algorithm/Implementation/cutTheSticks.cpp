#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int length = 1;
    while (length <= 1000 && length != 0)
    {
        int count = 0;
        int min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0 && a[i] <= 1000)
            {
                count++;
            }
        }
        if (count != 0)
        {
            cout << count << endl;
        }
        for (i = 1; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        length = min;
        for (i = 0; i < n; i++)
        {
            a[i] -= length;
            if (a[i] <= 0)
            {
                a[i] = 10000;
            }
        }
    }
    return 0;
}
