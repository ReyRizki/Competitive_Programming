#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u ll int countTriplets(int N, string S);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    string S;
    cin >> S;

    cout << countTriplets(N, S) << "\n";

    return 0;
}

u ll int countTriplets(int N, string S)
{
    u ll int count = 0;

    REP(i, 0, N - 2)
        REP(j, i + 1, N - 1)
            if (S[i] != S[j])
                REP(k, j + 1, N)
                    if (S[k] != S[j] and S[k] != S[i] and (j - i != k - j))
                        count++;

    return count;
}