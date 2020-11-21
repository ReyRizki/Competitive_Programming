#include <iostream>
#include <string>
#include <deque>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;



int main()
{
    deque<int> d;
    int N;

    cin >> N;
    REP(i, 0, N)
    {
        string S;
        cin >> S;

        int x;
        if (S.compare("push_front") == 0 or S.compare("push_back") == 0)
            cin >> x;

        if (S.compare("push_front") == 0)
            d.push_front(x);
        else if (S.compare("push_back") == 0)
            d.push_back(x);
        else if (S.compare("pop_front") == 0)
            d.pop_front();
        else if (S.compare("pop_back") == 0)
            d.pop_back();
    }

    REP(it, d.begin(), d.end())
        cout << *it << "\n";

    return 0;
}