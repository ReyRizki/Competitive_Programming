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
    vector<int> A(100000);

    u int N;
    cin >> N;

    ll int sum = 0;
    REP(i, 0, N)
    {
        u int a;
        cin >> a;
        sum += a;
        A[a - 1]++;
    }

    // for (auto it = vect.begin(); it != vect.end(); it++)
    //     cin >> *it;

    u int Q;
    cin >> Q;

    REP(i, 0, Q)
    {
        int B, C;
        cin >> B >> C;
        
        sum = sum + (A[B - 1] * (C - B));
        cout << sum << "\n";

        A[C - 1] += A[B - 1];
        A[B - 1] = 0;
    }
}