#include <iostream>

using namespace std;

int nextMultipleOfFive(int n);

int main()
{
    int size;
    cin>>size;
    int grade[size];
    for(int i = 0 ; i < size ; i++){
        cin>>grade[i];
        if((grade[i] >= 0) && (grade[i] <= 100)) {
            if(grade[i] >= 38) {
                cout<<nextMultipleOfFive(grade[i])<<"\n";
            }
            else {
                cout<<grade[i]<<"\n";
            }
        }
    }
    
    return 0;
}

int nextMultipleOfFive(int n)
{
    int value, answer;
    for(int i = 1 ; i <= 5 ; i++) {
        value = n + i;
        if(value%5 == 0) {
        answer = (((value - n) < 3)?n+i:n);
        }
    }
    return answer;
}
