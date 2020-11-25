#include <iostream>

using namespace std;

int toInt(char c)
{
    return c - '0';
}

int main()
{
    string s;

    cin >> s;

    cout << toInt(s[6]) % 2 << endl;

    return 0;
}