#include <iostream>
using namespace std;
int main()
{
    string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int lowerLimit, upperLimit;
    cin >> lowerLimit >> upperLimit;
    for (int i = lowerLimit; i <= upperLimit; i++)
        cout << ((i <= 9) ? number[i - 1] : ((i % 2 == 0) ? "even" : "odd")) << endl;
}
