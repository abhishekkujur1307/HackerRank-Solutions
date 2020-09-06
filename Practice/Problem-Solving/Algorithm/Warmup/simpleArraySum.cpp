#include <iostream>

using namespace std;

int main()
{
    int sizeOfArray, sum = 0;
    cin>>sizeOfArray;
    int numbers[sizeOfArray];
    for (int i = 0 ; i < sizeOfArray ; i++) {
        cin>>numbers[i];
    }
    for (int i = 0 ; i < sizeOfArray ; i++) {
        sum += numbers[i];
    }
    cout<<sum;
    return 0;
}
