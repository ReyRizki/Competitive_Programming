#include <iostream>
#include <string>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

vector<int> parseInts(string str) {
    int temp = 0;
    vector<int> result;
    int len = str.length();

    REP(i, 0, len)
    {
        char c = str[i];
        if (c == '-')
            temp = -1;
        else if (c >= '0' and c <= '9')
            temp = (temp == -1) ? (temp * (c - '0')) : (temp < 0 ? (temp * 10 - (c - '0')) : (temp * 10 + (c - '0')));
            // temp = (temp * 10 + (c - '0'));
        // cout << temp << "\n";
        if ((c == ',') or (i == len - 1))
        {
            result.push_back(temp);
            temp = 0;
        }
    }

    return result;
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