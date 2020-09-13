#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if (abs(c - b) == abs(c - a))
        {
            cout << "Mouse C" << endl;
        }
        else if (abs(c - b) < abs(c - a))
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Cat A" << endl;
        }
    }

    return 0;
}
