#include <iostream>
#include <set>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    set<int> nums;

    REP(i, 0, Q)
    {
        int x, y;
        cin >> x >> y;

        switch(x)
        {
        case 1:
            nums.insert(y); break;
        case 2:
            nums.erase(y); break;
        case 3:
            cout << (nums.find(y) == nums.end() ? "No" : "Yes") << "\n"; break;
        }
    }

    return 0;
}