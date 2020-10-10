#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int arr[6][6], sum[4][4];
    for(i = 0 ; i < 6 ; i++){
        for(j = 0 ; j < 6 ; j++) {
            cin>>arr[i][j];
        }
    }
    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 4 ; j++) {
            sum[i][j] = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        }
    }
    int max = sum[0][0];
    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 4 ; j++) {
            if(max < sum[i][j]) {
                max = sum[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}
