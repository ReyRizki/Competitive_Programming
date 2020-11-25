#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int solve(int K) 
{
    const int MAX_INDEX = static_cast<int>(1.0e7);

    int total = 0;
    for (int i = 1; i <= MAX_INDEX; i++)
    {
        total = (total * 10 + 7) % K;

        if (total == 0)
            return i;
    }

    return -1;
}

int main()
{
    int K; cin >> K;

    cout << solve(K) << "\n";

    return 0;
}