#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (u ll int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u ll int fizzbuzz(u ll int N);

int main()
{
    u ll int N;

    cin >> N;

    cout << fizzbuzz(N) << "\n";

    return 0;
}

u ll int fizzbuzz(u ll int N)
{
    u ll int sum = 0;

    REP(i, 1, N + 1)
        if ((i % 3 != 0) and (i % 5 != 0))
            sum += i;
    
    return sum;
}