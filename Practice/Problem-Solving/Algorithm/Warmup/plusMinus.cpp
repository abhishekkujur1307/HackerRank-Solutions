#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    float countPositive = 0, countNegative = 0, countZero = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            countPositive++;
        }
        else if (arr[i] < 0)
        {
            countNegative++;
        }
        else
            countZero++;
    }
    cout << fixed << setfill('0') << setprecision(6) << countPositive / n << "\n"
         << countNegative / n << "\n"
         << countZero / n;
    return 0;
}
