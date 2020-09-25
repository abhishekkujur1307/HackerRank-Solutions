#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

#define ll long long

using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> s >> k;
    int a = k % 26;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] + a > 90)
            {
                s[i] = s[i] + a - 26;
            }
            else
            {
                s[i] = s[i] + a;
            }
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] + a > 122)
            {
                s[i] = s[i] + a - 26;
            }
            else
            {
                s[i] = s[i] + a;
            }
        }
        cout << s[i];
    }
    return 0;
}
