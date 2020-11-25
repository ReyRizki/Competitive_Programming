#include <iostream>
#include <set>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int solve(int X, set<int> nums)
{
    u int min = -1, result = 0;

    REPR(i, X + 1, *nums.begin() - 1)
    {
        if (!nums.count(i) and abs(X - i) < min)
        {
            min = abs(X - i);
            result = i;
            break;
        }
    }

    REP(i, X, *nums.rbegin() + 2)
    {
        if (!nums.count(i) and abs(X - i) < min)
        {
            min = abs(X - i);
            result = i;
            break;
        }
    }

    return result;
}

int main()
{
    int X; 
    u int N;
    cin >> X >> N;

    set<int> nums;
    if (N == 0)
        nums.insert(0);

    REP(i, 0, N)
    {
        u int a;
        cin >> a;
        nums.insert(a);
    }

    cout << solve(X, nums) << "\n";

    return 0;
}