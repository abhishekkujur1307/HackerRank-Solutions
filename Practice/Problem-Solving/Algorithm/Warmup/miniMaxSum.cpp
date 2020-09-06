#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int minValue = arr[0], maxValue = arr[0];
    long long sum = arr[0];
    for (int i = 1; i < 5; i++)
    {
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
        sum += arr[i];
    }
    cout << sum - maxValue << " " << sum - minValue;
    return 0;
}
