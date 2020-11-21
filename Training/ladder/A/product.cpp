#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

string multiply(string num1, string num2)
{
    int len1 = num1.length(), len2 = num2.length();
    
    // check if any num has length 0
    // if yes, return 0
    if ((len1 == 0) or (len2 == 0))
        return "0";

    if (((len1 == 1) and (num1[0] == '0')) or ((len2 == 1) and (num2[0] == '0')))
        return "0";

    // declare vector with length of num1 + num2 and initialize with 0
    vector<int> res(len1 + len2, 0);

    // declare 2 index to point num1 and num2
    int i1 = 0, i2 = 0;

    // traverse from right to left in num1
    REPR(i, len1, 0)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        // cout << n1;
        i2 = 0;
        // traverse from right to left in num2
        REPR(j, len2, 0)
        {
            int n2 = num2[j] - '0';

            // sum
            int sum = (n1 * n2) + res[i1 + i2] + carry;

            // if sum > 9, store the carry
            carry = sum / 10;

            // store the sum % 10
            res[i1 + i2] = sum % 10;

            i2++;
        }

        // add carry
        res[i1 + i2] += carry;
        
        i1++;
    }

    int i = res.size() - 1;
    // remove leading 0s
    while ((i >= 0) and (res[i] == 0))
        i--;

    // if all of them are 0, return 0
    if (i == -1)
        return 0;  

    // convert to string
    string s;

    // return the string
    while (i >= 0)
        s.push_back(res[i--] + '0');

    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    // int t = 1; // cin >> t;
    string num1, num2;
    while (cin >> num1 >> num2)
        cout << multiply(num1, num2) << "\n";

    return 0;
}

