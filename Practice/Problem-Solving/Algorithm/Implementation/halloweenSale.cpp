#include <iostream>

using namespace std;

int main()
{
    int p, d, m, s, sum, i = 0, diff;
    cin >> p >> d >> m >> s;
    if (s > p)
    {
        while (m < p - d * i)
        {
            sum += p - d * i;
            if (sum > s)
            {
                break;
            }
            i++;
        }
        if(sum > s)
        {
            cout << i;
        }
        else
        {
            sum = p * i - (d * i * (i - 1)) / 2;
            diff = (s - sum) / m;
            cout << i + diff;
        }
    }
    else
    {
        cout << i;
    }

    return 0;
}
