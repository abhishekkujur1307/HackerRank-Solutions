#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j, primaryDiagonal = 0, secondaryDiagonal = 0;
    cin >> n;
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                primaryDiagonal += arr[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i + j) == n - 1)
            {
                secondaryDiagonal += arr[i][j];
            }
        }
    }
    int diff = abs(primaryDiagonal - secondaryDiagonal);
    cout << diff;
    return 0;
}
