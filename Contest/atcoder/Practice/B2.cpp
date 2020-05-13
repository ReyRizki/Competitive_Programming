#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    char c[26];
    REP(i, 0, N)
        c[i] = 'A' + i;

    REP(i, 0, N-1)
    {
        REP(j, i+1, N)
        {
            cout << "? " << c[i] << " " << c[j] << "\n";
            char ans, temp;
            cin >> ans;
            if (ans == '>')
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    REP(i, 0, N)
        cout << c[i];
    cout << "\n";

    return 0;
}