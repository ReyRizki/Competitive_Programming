#include <iostream>
#include <vector>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int N, M, K;
    cin >> N >> M >> K;

    vector<int> A(N), B(N);

    REP(i, 0, N)
        cin >> A[i];

    REP(i, 0, N)
        cin >> B[i];

    u int i = 0, j = 0;
    u int minTime = min(A[i], B[j]);

}