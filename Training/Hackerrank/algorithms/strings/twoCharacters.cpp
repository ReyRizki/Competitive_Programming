#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void printVector(vector<int> vect)
{
    for (auto i = vect.begin(); i != vect.end(); ++i)
        cout << *i << " ";
    cout << "\n";
}

void arrange(vector<int> &v1, vector<int> &v2)
{
    if ((v2.size() > v1.size()) or ((v1.size() == v2.size()) and (v2[0] < v1[0])))
        swap(v1, v2);
}

bool isValid(vector<int> v1, vector<int> v2)
{
    int diff = v1.size() - v2.size();
    if ((diff < -1) or (diff > 1))
        return 0;

    arrange(v1, v2);

    int size = v2.size();
    REP(i, 0, size)
        if (v2[i] < v1[i])
            return 0;

    if ((v1.size() > v2.size()) and (v1.back() < v2.back()))
        return 0;

    return 1;
}


void solve()
{
    map<char, vector<int>> indices;
    int n; cin >> n;

    REP(i, 0, n)
    {
        char x; cin >> x;
        indices[x].push_back(i);
    }
    
    int result = 0;
    for (auto i = indices.begin(); i != prev(indices.end(), 1); ++i)
    {
        for (auto j = next(i, 1); j != indices.end(); ++j)
        {
            if (isValid(i->second, j->second))
            {
                cout << i->first << " " << j->first << "\n";

                int candidate = i->second.size() + j->second.size();
                if (candidate > result)
                    result = candidate;
            }

        }
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t;

    while (t--)
        solve();

    return 0;
}