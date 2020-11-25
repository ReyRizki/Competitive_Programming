#include <bits/stdc++.h>

using namespace std;

bool solve(string s)
{
    stack<char> st;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' or s[i] == '[' or s[i] == '(')
            st.push(s[i]);
        else if ((not st.empty()) and (((s[i] == '}') and (st.top() == '{')) or ((s[i] == ']') and (st.top() == '[')) or ((s[i] == ')') and (st.top() == '('))))
            st.pop();
        else
            return 0;
    }

    return st.empty();
}

// Complete the isBalanced function below.
string isBalanced(string s) {
    return (solve(s) ? "YES" : "NO");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
