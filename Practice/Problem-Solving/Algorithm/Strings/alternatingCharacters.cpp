#include <iostream>

using namespace std;

int main()
{
    int q;
    string s;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int count = 0;
        cin >> s;
        for (int j = 0; j < s.length() - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
