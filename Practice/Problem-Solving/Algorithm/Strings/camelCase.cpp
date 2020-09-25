#include <iostream>

using namespace std;

int main()
{
    string s;
    long count = 1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
