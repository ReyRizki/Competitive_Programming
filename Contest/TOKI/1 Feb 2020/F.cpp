#include <iostream>

using namespace std;

bool gameOver(int pos, int N);

void turn(int *pos, int enemy, int N, int K, int L);

int main()
{
    int N, K, L;
    cin >> N >> K >> L;

    int posA = 1, posB = 1;
    char winner;
    do
    {
        if ((!gameOver(posA, N)) && (!gameOver(posB, N)))
        {
            turn(&posA, posB, N, K, L);
            if (posA == N)
                winner = 'A';
        }

        if ((!gameOver(posA, N)) && (!gameOver(posB, N)))
        {
            turn(&posB, posA, N, K, L);
            if (posB == N)
                winner = 'B';
        }
    } while ((!gameOver(posA, N)) && (!gameOver(posB, N)));

    cout << winner << "\n";

    return 0;
}

bool gameOver(int pos, int N)
{
    return (pos == N);
}

void turn(int *pos, int enemy, int N, int K, int L)
{
    if (*pos + L <= N)
    {
        if (*pos + L <= enemy + K)
        {
            *pos += L;
        }
        else
        {
            *pos += K;
        }
    }
    else
    {
        *pos = N;
    }
}