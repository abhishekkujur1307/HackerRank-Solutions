#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, n;
    unsigned long long sum = 0;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            sum = pow(2, n / 2 + 1);
            cout << sum - 1 << endl;
        }
        else if (n % 2 == 1)
        {
            sum = pow(2, n / 2 + 2);
            cout << sum - 2 << endl;
        }
    }
    return 0;
}
