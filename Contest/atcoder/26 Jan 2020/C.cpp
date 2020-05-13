#include <iostream>
#include <algorithm>

#define REP(i, a, b) for (int i = a; i < (b); i++)
#define REPR(i, a, b) for (int i = (a); i >= b; i++)
#define ull unsigned long long

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    ull int H[2 * 100 * 1000];
    REP(i, 0, N)
        cin >> H[i];

    sort(H, H+N);

    ull int sum = 0;
    REP(i, 0, N - K)
        sum += H[i];

    cout << sum << "\n";

    return 0;
}