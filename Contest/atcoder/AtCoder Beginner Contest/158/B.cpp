#include <iostream>

using namespace std;

int main()
{
    unsigned long long int N, A, B;

    cin >> N >> A >> B;

    N > A ? cout << A : cout << N;
    cout << "\n";

    return 0;
}