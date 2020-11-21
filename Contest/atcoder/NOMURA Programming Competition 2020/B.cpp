#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    string S;
    cin >> S;

    u int len = S.length();
    REP(i, 0, len)
    {
        if (S[i] == '?')
        {
            if (i != 0 and S[i - 1] == 'P')
                S[i] = 'D';
            else if ((i != len - 1) and (S[i + 1] == 'D' or S[i + 1] == '?'))
                S[i] = 'P';
            else
                S[i] = 'D';
        }
    }

    cout << S << "\n";

    return 0;
}