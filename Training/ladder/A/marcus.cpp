#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int searchStart(string s)
{
    int n = s.length();

    REP(i, 0, n)
        if (s[i] == '@')
            return i;

    return -1;
}

void solve()
{
    int r, c; cin >> r >> c;
    pair<int, int> start;

    vector<string> mat;

    REP(i, 0, r)
    {
        string s; cin >> s;

        int idc = searchStart(s);

        if (idc != -1)
            start = make_pair(i, idc);

        mat.push_back(s);
    }

    string word = "IEHOVA#";
    int step = 0;

    vector<string> v = {"left", "forth", "right"};
    vector<int> dr = {0, -1, 0};
    vector<int> dc = {-1, 0, 1};

    pair<int, int> curr = start;

    vector<string> result;
    while (step < 7)
    {
        REP(i, 0, 3)
        {
            pair<int, int> temp = make_pair(curr.first + dr[i], curr.second + dc[i]);

            if ((temp.first < 0) or (temp.first >= r) or (temp.second < 0) or (temp.second >= c) or (mat[temp.first][temp.second] != word[step]))
                continue;
            else
            {
                curr = temp;
                result.push_back(v[i]);
                break;
            }
        }

        step++;
    }

    REP(i, 0, 7)
        cout << result[i] << (i == 6 ? "\n" : " ");
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; cin >> t;
    while (t--)
        solve();

    return 0;
}