#include <iostream>
#include <algorithm>

#define REP(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int height[1000];
    REP(i, 0, N)
        cin >> height[i];

    sort(height, height+N);

    cout << height[K-1] << "\n";

    return 0;
}