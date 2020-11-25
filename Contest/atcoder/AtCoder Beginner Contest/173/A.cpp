#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int N; cin >> N;

    cout << (N % 1000 == 0 ? 0 : (1000 - (N % 1000))) << "\n";

    return 0;
}