#include <iostream>
#include <cstdlib>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

char randomize()
{
    char rgb[3] = { 'R', 'G', 'B' };

    return rgb[rand() % 3];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    srand(time(NULL));

    u int N;
    cin >> N;
    REP(i, 0, N)
        cout << randomize();

    cout << "\n";
}