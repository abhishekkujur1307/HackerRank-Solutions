#include <iostream>

using namespace std;

int main()
{
    int n, k, highest = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > highest)
        {
            highest = a;
        }
    }
    cout << (highest > k ? highest - k : 0);

    return 0;
}
