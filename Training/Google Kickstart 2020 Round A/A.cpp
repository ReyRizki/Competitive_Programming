#include <iostream>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int B, N;
        cin >> N >> B;

        u int A[N];
        REP(j, 0, N)
            cin >> A[j];
        
        sort(A, A + N);

        u int k = 0;
        while (k < N and B >= A[k])
        {
            B -= A[k];
            k++;
        }

        cout << "Case #" << i + 1 << ": " << k << "\n";
    }

    return 0;
}