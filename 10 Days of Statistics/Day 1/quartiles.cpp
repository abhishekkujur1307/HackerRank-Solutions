#include <iostream>
#include <iomanip>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int a[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubbleSort(a, n);
    int b, c;
    b = n / 2;
    c = n / 4;

    if (n % 2 == 1)
    {
        if (b % 2 == 1)
        {
            cout << a[b - c - 1] << "\n"
                 << a[b] << "\n"
                 << a[b + c + 1];
        }
        else
        {
            cout << (a[b - c - 1] + a[b - c]) / 2 << "\n"
                 << a[b] << "\n"
                 << (a[b + c] + a[b + c + 1]) / 2;
        }
    }

    else
    {
        if (b % 2 == 1)
        {
            cout << a[b - c - 1] << "\n"
                 << (a[b - 1] + a[b]) / 2 << "\n"
                 << a[b + c];
        }
        else
        {
            cout << (a[b - c - 1] + a[b - c]) / 2 << "\n"
                 << (a[b - 1] + a[b]) / 2 << "\n"
                 << (a[b + c - 1] + a[b + c]) / 2;
        }
    }

    return 0;
}
