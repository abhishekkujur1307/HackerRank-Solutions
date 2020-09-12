#include <iostream>

using namespace std;

int main()
{
    long n, p;
    cin >> n >> p;
    cout << ((n / 2 - p / 2) > p / 2 ? p / 2 : n / 2 - p / 2);
    return 0;
}
