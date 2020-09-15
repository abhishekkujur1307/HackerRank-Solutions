#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int n);

int main()
{
    int lower, upper, k, count = 0;
    cin>>lower>>upper>>k;
    for(int i = lower ; i <= upper ; i++) {
        int diff = abs(i - reverseNumber(i));
        if(diff % k == 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

int reverseNumber(int n)
{
    int rem, reverse = 0;
    while(n!=0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n/=10;
    }
    return reverse;
}

