#include <iostream>
#include <queue>
#include <string>
#include <stack>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void enqueue(queue<int> &q)
{
    int X, Y;
    cin >> X >> Y;

    REP(i, 0, Y)
        q.push(X);
    
    cout << q.size() << "\n";
}

void dequeue(queue<int> &q)
{
    cout << q.front() << "\n";

    int Y;
    cin >> Y;

    REP(i, 0, Y)
        q.pop();
}

void reverse(queue<int> &q)
{
    stack<int> Stack;

    while (!q.empty())
    {
        Stack.push(q.front());
        q.pop();
    }

    while (!Stack.empty())
    {
        q.push(Stack.top());
        Stack.pop();
    }

    // if (q.empty())
    //     return;

    // int data = q.front();
    // q.pop();

    // reverse(q);

    // q.push(data);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    u int N;
    cin >> N;

    REP(i, 0, N)
    {
        string command;
        cin >> command;

        if (command.compare("add") == 0)
            enqueue(q);
        else if (command.compare("del") == 0)
            dequeue(q);
        else if (command.compare("rev") == 0)
            reverse(q);
    }
}