#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void dfs(vector<vector<int>> v, vector<bool> &visited, stack<int> &st, int i)
{
    if (visited[i])
        return;
    
    visited[i] = 1;
    for (auto x: v[i])
        if (not visited[x])
            dfs(v, visited, st, x);

    st.push(i);
}

void solve()
{
    int n, k; scanf("%d %d", &n, &k);

    vector<bool> visited(n, 0);
    vector<vector<int>> graph(n);

    REP(i, 0, k)
    {
        int w; scanf("%d", &w);

        REP(j, 0, w)
        {
            int x; scanf("%d", &x);

            graph[i].push_back(x - 1);
        }
    }

    stack<int> st;

    REP(i, 0, n)
        if (not visited[i])
            dfs(graph, visited, st, i);

    vector<int> result(n);
    
    int pos = -1;
    while (not st.empty())
    {
        result[st.top()] = pos;
        pos = st.top();
        
        st.pop();
    }

    for (auto x: result)
        printf("%d\n", x + 1);
    // printf("\n");
}   

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}