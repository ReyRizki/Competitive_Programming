#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int N;
        cin >> N;

        u int H[N];
        REP(j, 0, N)
            cin >> H[j];

        u int count = 0;
        REP(j, 1, N - 1)
            if ((H[j] > H[j - 1]) and (H[j] > H[j + 1]))
                count++;

        cout << "Case #" << i + 1 << ": " << count << "\n";
    }
    return 0;
}