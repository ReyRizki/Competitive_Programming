#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int A[M];
    REP(i, 0, M)
    {
        cin >> A[i];
        N -= A[i];
    }

    cout << (N < 0 ? -1 : N) << "\n";

    return 0;
}