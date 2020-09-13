#include <iostream>

using namespace std;

int main()
{
    long b, m, n, max = -1;
    int i, j;
    cin >> b >> m >> n;
    int keyboard[m], usb[n];
    for (i = 0; i < m; i++)
    {
        cin >> keyboard[i];
    }
    for (j = 0; j < n; j++)
    {
        cin >> usb[j];
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((keyboard[i] + usb[j] <= b))
            {
                if (max < (keyboard[i] + usb[j]))
                {
                    max = keyboard[i] + usb[j];
                }
            }
        }
    }
    cout << max;
    return 0;
}
