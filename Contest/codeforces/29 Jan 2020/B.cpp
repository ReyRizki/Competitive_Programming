#include <iostream>
#include <string>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int t;
    cin >> t;

    int res[100];
    REP(i, 0, t)
    {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int sum = 0;
        int index = 0;
        int count0 = 0, count1 = 0;
        string t;
        while ((sum <= 100 * 1000) && (t.length() <= 100 * 10000))
        {
            int len = t.length();

            // cout << len << endl;

            int bal = count0 - count1;
            if (bal == x)
                sum++;

            while (index < len)
            {
                if (t[index] == '0')
                {
                    count0++;
                }
                else if (t[index] == '1')
                {
                    count1++;
                }

                bal = count0 - count1;
                if (bal == x)
                    sum++;

                index++;
            }

            t.append(s);
        }

        res[i] = sum;
        if (res[i] >= 100 * 1000)
            res[i] = -1;
    }

    REP(i, 0, t)
        cout << res[i] - 1 << "\n";

    return 0;
}