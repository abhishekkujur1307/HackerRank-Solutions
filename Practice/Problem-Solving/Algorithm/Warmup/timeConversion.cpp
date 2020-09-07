#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int h, m, s;
    char symbol, amOrPm;
    cin>>h>>symbol>>m>>symbol>>s>>amOrPm>>symbol;
    h = (amOrPm == 'A')?((h == 12)?0:h):((amOrPm == 'P')?((h == 12)?h:h+12):h);
    
    cout<<setw(2)<<setfill('0')<<h<<":"
        <<setw(2)<<setfill('0')<<m<<":"
        <<setw(2)<<setfill('0')<<s;
    return 0;
}
