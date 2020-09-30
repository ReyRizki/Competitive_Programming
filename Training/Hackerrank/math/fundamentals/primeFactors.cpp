#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve(vector<unsigned long long int> primorial)
{
    unsigned long long int n; cin >> n;

    int i = 0;
    while (i < primorial.size() and primorial[i] <= n)
        i++;

    cout << i << "\n";

    // for (auto it = primorial.begin(); it != primorial.end(); ++it)
    //     cout << *it << " ";
    // cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> primeNumber{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    vector<unsigned long long int> primorial;

    primorial.push_back(2);
    REP(i, 1, primeNumber.size())
        primorial.push_back(primeNumber[i] * primorial.back());

    int t = 1; cin >> t;

    while (t--)
        solve(primorial);

    return 0;
}