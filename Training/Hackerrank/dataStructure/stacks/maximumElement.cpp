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

void solve()
{
    int n; cin >> n;
    stack<int> st;
    int maxElement = 0;

    while (n--)
    {
        int type; cin >> type;
        int y;
        switch (type)
        {
        case 1:
            int x; cin >> x;
            if (st.empty())
            {
                st.push(x);
                maxElement = x;
            }
            else
            {
                if (x > maxElement)
                {
                    st.push(2 * x - maxElement);
                    maxElement = x;
                }
                else
                    st.push(x);
            }
            break;
        
        case 2:
            y = st.top();
            if (y > maxElement)
                maxElement = ((2 * maxElement) - y);
            
            st.pop();
            break;

        case 3:
            cout << maxElement << "\n";
            break;

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