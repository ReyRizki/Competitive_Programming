#include <iostream>
#include <set>
#include <numeric>
#include <iterator>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{ 
    int N, K;
    cin >> N >> K;

    multiset<int> p;

    REP(i, 0, N)
    {
        int x;
        cin >> x;

        p.insert(x);
    }

    cout << accumulate(p.begin(), next(p.begin(), K), 0) << "\n";

}