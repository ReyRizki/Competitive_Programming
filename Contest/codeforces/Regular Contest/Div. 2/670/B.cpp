#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void printVector(vector<int> v)
{
    for (int x: v)
        cout << x << " ";
    cout << "\n";
}

void solve()
{
    vector<int> pos, neg;
    int zero = 0;

    int n; cin >> n;

    REP(i, 0, n)
    {
        int x; cin >> x;
        
        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else
            zero++;
    }    

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(), greater<int>());

    int result = 1;
    int d = 5;
    while (d > 0)
    {
        // cout << d << (pos.empty() and zero == 0)

        if ((neg.size() > 1) and (d > 1))
        {
            if ((pos.empty()) or (abs(neg.back()) >= pos.back()))
            {
                REP(i, 0, 2)
                {
                    result *= neg.back();
                    neg.pop_back();
                }

                d -= 2;
            }
            else if (pos.back() > neg.back())
            {
                result *= pos.back();
                pos.pop_back();
                d--;
            }
        }
        else if ((pos.empty()) and (zero == 0))
        {
            // cout << "in 1\n";
            result *= neg.back();
            neg.pop_back();
            d--;
        }
        else
        {
            if (not pos.empty())
            {
                result *= pos.back();
                pos.pop_back();
                d--;
            }
            else
            {
                // cout << d << "\n";
                result *= 0;
                d -= zero;
            }
        }
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}