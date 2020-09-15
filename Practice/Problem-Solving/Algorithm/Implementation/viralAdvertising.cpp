#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, value = 5, sum = 0;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        value = floor(value/2);
        sum += value;
        value *= 3;
    }
    cout<<sum;
    return 0;
}
