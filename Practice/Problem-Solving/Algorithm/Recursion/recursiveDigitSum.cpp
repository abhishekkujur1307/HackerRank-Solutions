#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int

using namespace std;

int num(ull a)
{
    if (a <= 9)
    {
        return a;
    }
    ull sum = 0, value = 0;
    while (a != 0)
    {
        value = a % 10;
        sum += value;
        a /= 10;
    }
    return num(sum);
}

int superDigit(string s, int k)
{
    ull sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    return num(sum * k);
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    cout << superDigit(s, k);
    return 0;
}
