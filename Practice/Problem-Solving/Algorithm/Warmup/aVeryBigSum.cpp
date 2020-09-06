#include <iostream>

using namespace std;

int main()
{
    int input;
    long int value, sum = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        cin >> value;
        sum += value;
    }
    cout << sum;
    return 0;
}
