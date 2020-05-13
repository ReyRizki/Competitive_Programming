#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

struct Movement
{
    u int D;
    char T;

    Movement()
    {
        this->D = 0;
        this->T = 0;
    }

    Movement(u int D, char T)
    {
        this->D = D;
        this->T = T;
    };

    bool operator<(const Movement& move) const
    {
        return this->D < move.D;
    }
};

// typedef struct
// {
//     u int D;
//     char T;
// } Movement;

typedef struct
{
    u int id, H, count;
} Judge;

bool compareD(Movement m1, Movement m2)
{
    return m1.D < m2.D;
}

bool compareH(Judge j1, Judge j2)
{
    return j1.H < j2.H;
}

bool compareId(Judge j1, Judge j2)
{
    return j1.id < j2.id;
}

void dance(vector<Movement> &movement, u int R)
{
    do
    {
        REP(i, 0, R)
            cout << movement[i].D << " ";
        cout << "\n";

        reverse(movement.begin() + R, movement.end());
    } while (next_permutation(movement.begin(), movement.end()));
}

int main()
{
    // string sub;
    // u int X;
    // cin >> sub >> X;

    u int N, R, Y, J;
    cin >> N >> R >> Y >> J;

    vector<Movement> movement(N);
    REP(i, 0, N)
    {
        u int D, T;
        cin >> D >> T;

        Movement move(D, T);
        movement.push_back(move);
    }

    // REP(it, movement.begin(), movement.end())
    //     cin >> it->D >> it->T;

    // u int idCount = 0;
    // vector<Judge> judge(J);
    // REP(it, judge.begin(), judge.end())
    // {
    //     cin >> it->H;
    //     it->id = idCount++;
    //     it->count = 0;
    // }

    sort(movement.begin(), movement.end(), compareD);
    // sort(judge.begin(), judge.end(), compareH);

    dance(movement, R);

    // REP(it, movement.begin(), movement.end())
    //     cout << it->D << " " << it->T << "\n";

    // REP(it, judge.begin(), judge.end())
    //     cout << it->id << " " << it->H << " " << it->count << "\n";
}