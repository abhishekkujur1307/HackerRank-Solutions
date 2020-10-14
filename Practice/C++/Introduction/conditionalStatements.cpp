#include <iostream>
using namespace std;
int main()
{
    int input;
    string number[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> input;
    cout << ((input > 9) ? number[0] : number[input]);
}
