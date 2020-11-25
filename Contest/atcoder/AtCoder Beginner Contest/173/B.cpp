#include <iostream>
#include <map>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    map<string, int> result;
    string verdicts[4] = {"AC", "WA", "TLE", "RE"};

    REP(i, 0, 4)
        result[verdicts[i]] = 0;

    int N; cin >> N;

    REP(i, 0, N)
    {
        string verdict; cin >> verdict;
        result[verdict] ++;
    }

    REP(i, 0, 4)
        cout << verdicts[i] << " x " << result[verdicts[i]] << "\n";

    return 0;
}