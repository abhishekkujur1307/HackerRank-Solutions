#include <iostream>
using namespace std;

int main()
{
    string one, two;
    cin >> one >> two;
    cout << one.size() << " " << two.size() << "\n" << one+two;
    swap(one[0], two[0]);
    cout << "\n" << one << " " << two;
    return 0;
}
