#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long int a;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        cout << 4294967295 - a << endl;
    }
    return 0;
}
