#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void enqueue(deque<int> &q)
{
    int X, Y;
    cin >> X >> Y;

    REP(i, 0, Y)
        q.push_back(X);
    
    cout << q.size() << "\n";
}

void dequeue(deque<int> &q)
{
    cout << q.front() << "\n";

    int Y;
    cin >> Y;

    REP(i, 0, Y)
        q.pop_front();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> q;
    u int N;
    cin >> N;

    // q.push_back(2);
    // q.push_back(3);

    // reverse(q.begin(), q.end());

    // REP(it, q.begin(), q.end())
    //     cout << *it << (it == q.end() - 1 ? "\n" : " ");

    REP(i, 0, N)
    {
        string command;
        cin >> command;

        if (command.compare("add") == 0)
            enqueue(q);
        else if (command.compare("del") == 0)
            dequeue(q);
        else if (command.compare("rev") == 0)
            reverse(q.begin(), q.end());
    }
}