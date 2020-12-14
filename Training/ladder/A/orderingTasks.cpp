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
        dfs(v, visited, st, x);

    st.push(i);
}

void solve(int n, int m)
{
    vector<bool> visited(n, 0);

    vector<vector<int>> v(n);

    REP(i, 0, m)
    {
        int a, b; cin >> a >> b;

        v[a - 1].push_back(b - 1);
    }

    stack<int> st;

    REP(i, 0, n)
        dfs(v, visited, st, i);

    while (not st.empty())
    {
        cout << st.top() + 1 << (st.size() == 1 ? "\n" : " ");
        
        st.pop();
    }
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n, m;
    while (1)
    {
        cin >> n >> m;

        if ((n == 0) and (m == 0))
            break;

        solve(n, m);
    }
    
    return 0;
}