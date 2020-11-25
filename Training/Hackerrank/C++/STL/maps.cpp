#include <iostream>
#include <map>
#include <utility>

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

    map<string, int> marks;

    REP(i, 0, Q)
    {
        int type;
        string X;
        cin >> type >> X;

        switch(type)
        {
        case 1:
            int Y;
            cin >> Y;

            if (marks.find(X) == marks.end())
                marks.insert(make_pair(X, Y));
            else
                marks[X] += Y;
                
            break;

        case 2:
            marks.erase(X); break;

        case 3:
            cout << (marks.find(X) == marks.end() ? 0 : marks[X]) << "\n"; break;
        }
    }

    return 0;
}