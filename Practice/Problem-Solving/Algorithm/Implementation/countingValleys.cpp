#include <iostream>
using namespace std;

int main() {
    int n, x = 0, count = 0;
    cin>>n;
    char c;
    for(int i = 1; i<=n; i++)
    {
        cin>>c;
        if(x==0)
        {
            if(c=='D')
            {
                count++;
            }
        }
        x = (c == 'U')?x+1:x-1;
    }
    cout<<count;
    return 0;
}
