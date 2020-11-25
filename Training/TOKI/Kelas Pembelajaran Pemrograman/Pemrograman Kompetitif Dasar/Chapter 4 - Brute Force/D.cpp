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

typedef struct
{
    u int D;
    char T;
} Movement;

typedef struct
{
    u int id, H, count;
} Judge;

bool compareH(Judge j1, Judge j2)
{
    return j1.H < j2.H;
}

bool compareId(Judge j1, Judge j2)
{
    return j1.id < j2.id;
}

u int generateScore(vector<Movement> movement, vector<u int> index, u int R, u int Y)
{
    u int result = movement[index[0]].D;
    bool sure = 0;

    REP(i, 1, R)
    {
        switch(movement[index[i - 1]].T)
        {
        case 'B':
            result += movement[index[i]].D;
            break;

        case 'P':
            result += movement[index[i]].D * 2;
            break;

        case 'L':
            result += movement[index[i]].D / 2;
            break;

        case 'Y':
            result += movement[index[i]].D;
            sure = 1;
            break;

        default:
            break;
        }

        if (sure)
            result += Y;
    }

    return result;
}

void judging(vector<Judge> &judge, u int J, u int score)
{
    u int i = 0;
    
    while (score > judge[i].H and i < J)
        judge[i++].count++;
}

void dance(vector<Movement> movement, u int R, u int Y, vector<Judge> &judge, u int J)
{
    vector<u int> index(movement.size());
    iota(index.begin(), index.end(), 0);

    do
    {
        judging(judge, J, generateScore(movement, index, R, Y));
        
        reverse(index.begin() + R, index.end());
    } while (next_permutation(index.begin(), index.end()));
}

int main()
{
    string sub;
    u int X;
    cin >> sub >> X;

    u int N, R, Y, J;
    cin >> N >> R >> Y >> J;

    vector<Movement> movement(N);
    REP(it, movement.begin(), movement.end())
        cin >> it->D >> it->T;

    u int idCount = 0;
    vector<Judge> judge(J);
    REP(it, judge.begin(), judge.end())
    {
        cin >> it->H;
        it->id = idCount++;
        it->count = 0;
    }

    sort(judge.begin(), judge.end(), compareH);

    dance(movement, R, Y, judge, J);

    sort(judge.begin(), judge.end(), compareId);
    REP(it, judge.begin(), judge.end())
        cout << it->count << "\n";
}