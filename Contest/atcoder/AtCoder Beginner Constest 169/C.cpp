#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

u ll int solution(u ll int A, float B)
{
    return A * B;
}

int main()
{
    u ll int A;
    float B;

    // cin >> A;

    scanf("%llu %.2f", &A, &B);

    cout << solution(A, B) << "\n";

    return 0;
}