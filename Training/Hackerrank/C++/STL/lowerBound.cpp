#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

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

    vector<int> vect;
    REP(i, 0, N) {
        int x;
        cin >> x;
        vect.push_back(x);
    }

    int Q;
    cin >> Q;

    REP(i, 0, Q) {
        int q;
        cin >> q;

        vector<int>::iterator pos = lower_bound(vect.begin(), vect.end(), q);

        cout << (*pos == q ? "Yes" : "No") << " " << pos - vect.begin() + 1 << "\n";
    }

    return 0;
}