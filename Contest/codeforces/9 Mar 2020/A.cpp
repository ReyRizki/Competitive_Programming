#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

bool validator(int N, int M)
{
    if (N == M)
        return true;
    else if (N % M == 0)
        return validator(N/2, M);
    else
        return false;
}

int main()
{
    int T, N, M;
    bool result[10000];

    cin >> T;
    REP(i, 0, T)
    {
        cin >> N >> M;
        result[i] = validator(N, M);
    }

    REP(i, 0, T)
        result[i] ? cout << "YES\n" : cout << "NO\n";

    return 0;
}