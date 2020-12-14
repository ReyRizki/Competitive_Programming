#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<vector<int>> graph(n);

    REP(i, 0, k)
    {
        int w; cin >> w;

        REP(j, 0, w)
        {
            int x; cin >> x;

            graph[i].push_back(x - 1);
        }
    }

    vector<int> indegree(n, 0);

    for (auto node: graph)
        for (auto adj: node)
            indegree[adj]++;

    queue<int> q;
    REP(i, 0, n)
        if (indegree[i] == 0)
            q.push(i);

    vector<int> topsortResult;
    while (not q.empty())
    {
        int curr = q.front();
        topsortResult.push_back(curr);

        for (auto adj: graph[curr])
        {
            indegree[adj]--;

            if (indegree[adj] == 0)
                q.push(adj);
        }

        // cout << q.front() << " ";
        q.pop();
    }
    // cout << "\n";


    int boss = -1;
    vector<int> ans(n);

    REP(i, 0, n)
    {
        ans[topsortResult[i]] = boss + 1;
        boss = topsortResult[i];
    }

    for (auto x: ans)
        cout << x << "\n";
    // cout << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}