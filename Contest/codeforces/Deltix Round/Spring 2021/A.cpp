#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    string s; cin >> s;

    int i = 0;
    bool first = 1;
    while (i < n) {
        if (s[i] == '1') {
            if (first) {
                // cout << "masuk\n";
                REPR(k, i, max(0, max(0, i - m))) {
                    s[k] = '1';
                }
                // cout << s << "\n";

                first = 0;
            }

            int j = i + 1;
            while ((j < n) and (s[j] != '1')) {
                j++;
            }

            // cout << j << "\n";

            if (j == n) {
                // cout << "masuk\n";
                REP(k, 1, min(n - i, m + 1)) {
                    s[k + i] = '1';
                }

                break;
            }

            int limit = (j - i + 1) / 2;
            // cout << limit << "\n";
            REP(k, 1, min(limit, m + 1)) {
                // cout << i + k << " " << j - k << "\n";
                s[i + k] = '1';
                s[j - k] = '1';
            }

            i = j;
            continue;
        }

        i++;
    }

    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
