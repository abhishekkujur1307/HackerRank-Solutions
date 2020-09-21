#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    float a = sqrt(s.length());
    int r = floor(a);
    int c = ceil(a);
    if (r * c < s.length())
    {
        r = r + 1;
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                int b = i + j * (r);
                if (b < s.length())
                {
                    cout << s[b];
                }
                else
                {
                    cout << "";
                }
            }
            cout << " ";
        }
    }
    else if (r == c)
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                int b = i + j * (r);
                if (b < s.length())
                {
                    cout << s[b];
                }
                else
                {
                    cout << "";
                }
            }
            cout << " ";
        }
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                int b = i + j * (r + 1);
                if (b < s.length())
                {
                    cout << s[b];
                }
                else
                {
                    cout << "";
                }
            }
            cout << " ";
        }
    }

    return 0;
}
