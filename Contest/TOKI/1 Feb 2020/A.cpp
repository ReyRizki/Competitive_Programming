#include <iostream>
#include <string>
#include <cctype>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

bool isSame(string s1, string s2);

char lower(char c);

int main()
{
    char S[101], T[101];
    cin >> S >> T;

    // cout << lower(S[0]) << endl;

    isSame(S, T) ? cout << "20/20" : cout << "x_x";
    cout << "\n";

    return 0;
}

bool isSame(string s1, string s2)
{
    int len = s1.length();

    REP(i, 0, len)
        if ((tolower(s1[i])) != (tolower(s2[i])))
            return false;

    return true;
}
