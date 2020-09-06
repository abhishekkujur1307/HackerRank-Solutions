#include <iostream>

using namespace std;

int main()
{
    int a[3], b[3], i, countA = 0, countB = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            countA++;
        }
        else if (a[i] < b[i])
        {
            countB++;
        }
    }
    cout << countA << " " << countB;
    return 0;
}
