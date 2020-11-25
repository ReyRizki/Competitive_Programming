#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

bool hasSeven(string N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string N;

    cin >> N;

    cout << (hasSeven(N) ? "Yes" : "No") << "\n";

    return 0;
}

bool hasSeven(string N)
{
    REP(i, 0, 3)
        if (N[i] == '7')
            return true;

    return false;
}