#include <iostream>
#include <queue>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n[2 * 100 * 1000];
    REP(i, 0, t)
        cin >> n[i];

    queue<int> res;
    REP(i, 0, t)
    {
        do
        {
            if (n[i] < 2)
            {
                res.push(0);
            }
            else
            {
                if (n[i] & 1)
                {
                    res.push(7);
                    n[i] -= 3;
                }
                else
                {
                    res.push(1);
                    n[i] -= 2;
                }
            }
        } while (n[i] >= 2);

        while (!res.empty())
        {
            cout << res.front();
            res.pop();
        }
        cout << '\n';
    }

    return 0;
}