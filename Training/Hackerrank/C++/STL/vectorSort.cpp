#include <iostream>
#include <vector>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vect(N);

    REP(i, 0, N)
    {
        int x;
        cin >> x;
        vect[i] = x;
    }

    sort(vect.begin(), vect.end());

    REP(i, 0, N)
        cout << vect[i] << " ";

    cout << "\n";

    return 0;
}