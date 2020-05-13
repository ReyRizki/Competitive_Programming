#include <iostream>
#include <algorithm>

#define REP(i, a, b) for (int i = a; i < b; i++)
#define DIS(a, b) abs(a - b)
#define print(a) cout << a << "\n"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, X;
    cin >> N >> X;

    int input[1000], winner;
    REP(i, 0, N)
    {
        cin >> input[i];

        if (i == 0)
            winner = input[i];
        else
            if (DIS(input[i], X) < DIS(winner, X))
                winner = input[i];
            else if (DIS(input[i], X) == DIS(winner, X))
                if (input[i] < winner)
                    winner = input[i];
    }

    print(winner);

    return 0;
}