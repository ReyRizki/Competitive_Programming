#include <iostream>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vect;
    REP(i, 0, N) {
        int x;
        cin >> x;
        vect.push_back(x);
    }

    int pos;
    cin >> pos;
    vect.erase(vect.begin() + pos - 1);

    int start, end;
    cin >> start >> end;
    vect.erase(vect.begin() + start - 1, vect.begin() + end - 1);

    cout << vect.size() << "\n";
    for (auto it = vect.begin(); it != vect.end(); ++it)
        cout << *it << " ";
    cout << "\n";

    return 0;
}