#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << "\n";
}

int maxElement(stack<int> st)
{
    int max = 0;

    while (!st.empty())
    {
        if (st.top() > max)
            max = st.top();
        st.pop();
    }

    return max;
}

void solve()
{
    int n; cin >> n;
    stack<int> st;

    while (n--)
    {
        int type; cin >> type;

        switch (type)
        {
        case 1:
            int x; cin >> x;
            st.push(x); break;
        
        case 2:
            st.pop(); break;

        case 3:
            cout << maxElement(st) << "\n"; break;

        default:
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> T;

    while (t--)
        solve();

    return 0;
}