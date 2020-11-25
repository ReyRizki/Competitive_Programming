#include <iostream>

#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{
    int H, N;
    int A[100000];

    cin >> H >> N;
    
    int sum = 0;
    REP(i, 0, N)
    {
        cin >> A[i];
        sum += A[i];
    }

    sum >= H ? cout << "Yes\n" : cout << "No\n";

    return 0;
}