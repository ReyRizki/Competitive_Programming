#include <iostream>

#define ull unsigned long long

using namespace std;

int solution(int N, int M);

int combination(int n, int r);

ull int factorial(int n);

int main()
{
    int N, M;

    cin >> N >> M;

    cout << solution(N, M) << "\n";
}

int solution(int N, int M)
{
    return combination(N, 2) + combination(M, 2);
}

int combination(int n, int r)
{
    return (n == 0 || n == 1) ? 0 : (factorial(n) / (factorial(r) * factorial(n - r)));
}

ull int factorial(int n)
{
    return (n == 0) ? 1 : n * factorial(n - 1);
}