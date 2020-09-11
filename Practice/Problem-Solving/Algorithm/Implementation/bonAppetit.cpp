#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k, sum = 0, actual, charged;
    cin>>n>>k;
    int bill[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>bill[i];
        sum += bill[i]; 
    }
    cin>>charged;
    actual = (sum - bill[k])/2;
    int diff = abs(charged - actual);
    if(diff == 0)
        cout<<"Bon Appetit";
    else
        cout<<diff;
    return 0;
}
