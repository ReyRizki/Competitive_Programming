#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int N;
    cin >> N;
    vector<u int> vect(N);

    for (auto it = vect.begin(); it != vect.end(); it++)
        cin >> *it;

    u int Q;
    cin >> Q;

    REP(i, 0, Q)
    {
        u int B, C;
        cin >> B >> C;
        replace(vect.begin(), vect.end(), B, C);
        cout << accumulate(vect.begin(), vect.end(), 0) << "\n";
    }
}