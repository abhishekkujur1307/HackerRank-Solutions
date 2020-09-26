#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() / 3; i++)
    {
        if (s[3 * i] != 'S')
        {
            count++;
        }
        if (s[3 * i + 1] != 'O')
        {
            count++;
        }
        if (s[3 * i + 2] != 'S')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
