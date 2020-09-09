#include <iostream>

using namespace std;

int main()
{
    int n, i, countMax = 0, countMin = 0, count = 0;
    cin>>n;
    int score[n];
    for(i = 0 ; i < n ; i++) {
        cin>>score[i];
    }
    int max = score[0], min = score[0];
    for(i = 1 ; i < n ; i++) {
        if(max < score[i]) {
            max = score[i];
            countMax++;
        }
        else if(min > score[i]) {
            min = score[i];
            countMin++;
        }
        else if(max == min) {
            count++;
        }
    }
    cout<<countMax<<" "<<countMin;
    return 0;
}
