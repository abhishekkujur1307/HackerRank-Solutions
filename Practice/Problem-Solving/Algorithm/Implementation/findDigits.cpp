#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    int i, remainder, count = 0;
    unsigned long long num, final_num;
    for(i=0 ; i<t ; i++) {
        count = 0;
        cin>>num;
        final_num=num;
        while(num%10 != num) {
            remainder = num%10;
            num = num/10;
            if(remainder == 0)
                continue;
            if(final_num % remainder == 0)
                count++;
        }
        if(num != 0 && final_num % num == 0)
            count++;
            cout<<count<<endl;
    }
    return 0;
}
