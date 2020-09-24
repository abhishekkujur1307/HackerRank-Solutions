#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        for (int j = 0; j < n; j++)
        {
            if (b == a)
            {
                cout << a * (n - 1 - j) + b * j << " ";
                break;
            }
            if (b > a)
            {
                cout << a * (n - 1 - j) + b * j << " ";
            }
            else if (a > b)
            {
                cout << b * (n - 1 - j) + a * j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
