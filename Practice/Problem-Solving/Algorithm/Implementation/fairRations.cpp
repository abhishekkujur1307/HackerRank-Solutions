#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, total = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        total += a[i];
    }
    if(total%2==0)
    {
        for(int i = 0; i<n-1 ;i++)
        {
            if(a[i]%2!=0)
            {
                count++;
                a[i] += 1;
                a[i+1] += 1;
            }
        }
        cout<<2*count;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
