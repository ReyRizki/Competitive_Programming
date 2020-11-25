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
    u ll int N;
    cin >> N;

    string result;
    while (N > 0)
    {
        N--;
        result.insert(result.begin(), (N % 26) + 97);
        N /= 26;
    }

    cout << result<< "\n";

    return 0;
}