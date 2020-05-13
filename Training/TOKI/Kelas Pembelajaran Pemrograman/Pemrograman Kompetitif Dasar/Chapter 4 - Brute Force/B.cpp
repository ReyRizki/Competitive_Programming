#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

bool isValid(u int *scoreArr, u int elements, u int slots, u int teamScore)
{
    u int possibleScore[] = { 0, 1, 3 };
    
    if (elements == slots)
    {
        if (accumulate(scoreArr, scoreArr + slots, 0) == teamScore)
            return 1;     
    }
    else
    {
        REP(i, 0, 3)
        {
            *(scoreArr + elements) = possibleScore[i];

            if (isValid(scoreArr, elements + 1, slots, teamScore))
                return 1;
        }
    }
    
    return 0;
}

bool isPossible(u int *scores, u int N)
{
    u int *scoreArr = (u int *) malloc(N * N * sizeof(u int));

    REP(i, 0, N)
    {
        REP(j, 0, i + 2)
        {
            if (j == i)
                *(scoreArr + i * N + j) = 0;
            else if (j < i)
            {
                switch(*(scoreArr + j * N + i))
                {
                case 0:
                    *(scoreArr + i * N + j) = 3;
                    break;
                case 1:
                    *(scoreArr + i * N + j) = 1;
                    break;
                case 3:
                    *(scoreArr + i * N + j) = 0;
                    break;
                default:
                    break;
                }
            }
            else if (j > i)
            {
                if (i < N - 1)
                {
                    if (not isValid(scoreArr + i * N + j, 0, N - i - 1, *(scores + i) - accumulate(scoreArr + i * N, scoreArr + i * N + j, 0)))
                        return 0;
                }
                else if (i == N - 1)
                    return (accumulate(scoreArr + i * N, scoreArr + i * N + j, 0) == *(scores + i));
            }
        }
    }
}

int main()
{
    u int T;
    cin >> T;

    bool result[T];

    REP(i, 0, T)
    {
        u int N;
        cin >> N;

        u int *scores = (u int *) malloc(N * sizeof(u int));
        REP(j, 0, N)
            cin >> *(scores + j);
        
        sort(scores, scores + N, greater<u int>());

        // result[i] = isPossible(scores, N);
        cout << (isPossible(scores, N) ? "YES" : "NO") << "\n";
    }

    // REP(i, 0, T)
    //     cout << (result[T] ? "YES" : "NO") << "\n";

    return 0;
}