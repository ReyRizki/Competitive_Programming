#include <iostream>
#include <cmath>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int a;
    cin >> a;

    cout << a + pow(a, 2) + pow(a, 3) << "\n";

    return 0;
}