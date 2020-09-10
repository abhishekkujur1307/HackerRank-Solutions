#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, count = 0;
    cin>>n>>k;
    int arr[n];
    for (i = 0 ; i < n ; i++) {
        cin>>arr[i];
        for(j = 0 ; j < i ; j++) {
            if((arr[i] + arr[j]) % k == 0) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
