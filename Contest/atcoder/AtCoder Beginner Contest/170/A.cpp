#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int result;

    REP(i, 0, 5)
    {
        u int x;
        cin >> x;

        if (x == 0)
            result = i + 1;
    }

    cout << result << "\n";
}