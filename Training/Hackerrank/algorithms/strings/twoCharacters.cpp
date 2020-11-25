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

vector<int> mergeVector(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    vector<int> result;
    while ((i < v1.size()) or (j < v2.size()))
    {
        if (((i < v1.size()) and (v1[i] < v2[j])) or (j >= v2.size()))
        {
            result.push_back(v1[i]);
            i++;
        }
        else if (((j < v2.size()) and (v2[j] < v1[i])) or (i >= v1.size()))
        {
            result.push_back(v2[j]);
            j++;
        }
    }

    return result;
}

bool isValid(string s, vector<int> v1, vector<int> v2)
{
    int diff = v1.size() - v2.size();
    if ((diff < -1) or (diff > 1))
        return 0;

    char prev = 0;
    vector<int> two = mergeVector(v1, v2);
    REP(i, 0, two.size())
    {
        if (prev == s[two[i]])
            return 0;
        else
            prev = s[two[i]];
    }

    return 1;
}

void solve()
{
    map<char, vector<int>> indices;
    string s;
    int n; cin >> n;

    REP(i, 0, n)
    {
        char x; cin >> x;
        s.push_back(x);
        indices[x].push_back(i);
    }

    int result = 0;
    for (auto i = indices.begin(); i != prev(indices.end(), 1); ++i)
    {
        for (auto j = next(i, 1); j != indices.end(); ++j)
        {
            if (isValid(s, i->second, j->second))
            {
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