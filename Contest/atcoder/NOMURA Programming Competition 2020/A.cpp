#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int H[2], M[2], K;

    cin >> H[0] >> M[0] >> H[1] >> M[1] >> K;

    cout << (H[1] * 60 + M[1]) - (H[0] * 60 + M[0]) - K << "\n";

    return 0;
}