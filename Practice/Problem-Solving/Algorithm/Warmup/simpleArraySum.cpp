#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        sum = sum+ numbers[i];
    }
    cout << sum;
    return 0;
}
