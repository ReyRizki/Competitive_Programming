#include <iostream>
#include <string>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    cout << b[0] + a.substr(1) << " " << a[0] + b.substr(1) << "\n";

    return 0;
}