#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int q;
    unsigned long long a, b;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int count = 0;
        cin >> a >> b;
        for (int j = sqrt(a); j <= sqrt(b); j++)
        {
            if ((j * j >= a) && (j * j <= b))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
