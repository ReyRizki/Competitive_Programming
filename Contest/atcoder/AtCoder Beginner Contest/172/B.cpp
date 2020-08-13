#include <iostream>
#include <string>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int len = S.length(), count = 0;
    REP(i, 0, len)
        if (S[i] != T[i])
            count++;

    cout << count << "\n";;
}