#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> answer;
    stringstream ss(str);
    char c;
    int a;
    while(ss >> a)
    {
        answer.push_back(a);
        ss >> c;
    }
    return answer; 
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
