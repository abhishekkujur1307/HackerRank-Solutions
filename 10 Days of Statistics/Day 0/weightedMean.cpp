#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float meanWeightNumerator = 0, meanWeightDenominator, meanWeight;
    cin>>n;
    int arr[n], w[n];
    for (int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cin>>w[i];
    }
    for(int i = 0 ; i < n ; i++) {
        meanWeightNumerator += arr[i] * w[i];
        meanWeightDenominator += w[i];
    }
    meanWeight = meanWeightNumerator/meanWeightDenominator;
    cout<<fixed<<setprecision(1)<<meanWeight;
    return 0;
}
