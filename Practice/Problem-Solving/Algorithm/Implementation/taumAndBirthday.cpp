#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long b, w, bc, wc, z;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> w >> bc >> wc >> z;
        if (z > bc && z > wc)
        {
            cout << b * bc + w * wc << endl;
        }
        else if (bc >= z || wc >= z)
        {
            if (bc > (wc + z))
            {
                bc = wc + z;
            }
            else if (wc > (bc + z))
            {
                wc = bc + z;
            }
            cout << b * bc + w * wc << endl;
        }
    }
    return 0;
}
