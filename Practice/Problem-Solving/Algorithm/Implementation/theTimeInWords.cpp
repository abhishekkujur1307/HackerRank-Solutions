#include <iostream>

using namespace std;

int main()
{
    string hour[13] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "one"};
    string minute[30] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
    int h, m;
    cin >> h >> m;
    if (m > 30)
    {
        cout << minute[60 - m - 1];
        if (60 - m == 1)
        {
            cout << " minute ";
        }
        else if (60 - m == 15 || 60 - m == 30)
        {
            cout << " ";
        }
        else
        {
            cout << " minutes ";
        }
        cout << "to " << hour[h];
    }
    else if (m >= 1 && m <= 30)
    {
        cout << minute[m - 1];
        if (m == 1)
        {
            cout << " minute ";
        }
        else if (30 - m == 15 || m == 30)
        {
            cout << " ";
        }
        else
        {
            cout << " minutes ";
        }
        cout << "past " << hour[h - 1];
    }
    else
    {
        cout << hour[h - 1] << " o' clock";
    }

    return 0;
}
