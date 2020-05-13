#include <iostream>
#include <cstdlib>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int randomize()
{
    return (rand() % 2) + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    srand(time(NULL));

    int M, N;
    cin >> M >> N;
    
    REP(i, 0, M)
        REP(j, 0, N)
            cout << randomize() << (j == M - 1 ? "\n" : " ");

    return 0;
}