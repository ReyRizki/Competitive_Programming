#include <iostream>
#include <cmath>

#define REP(i, a, b) for (int i = a; i < b; i++)
#define MAXSIZE 100000

using namespace std;

int minSearch(int arr[], int key, int jump, int start, int end);

int maxSearch(int arr[], int key, int jump, int start, int end);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int weight[MAXSIZE];

    REP(i, 0, N)
        cin >> weight[i];

    int Q;
    cin >> Q;
    int X, Y;
    int result[MAXSIZE];
    REP(i, 0, Q)
    {
        cin >> X >> Y;

        int minId = N-1, maxId = 0;
        int jump = sqrt(N);

        bool found1 = false;
        int j = 0;
        minId = minSearch(weight, X, jump, 0, N);
        if (minId <= N)
            found1 = true;

        bool found2 = false;
        maxId = maxSearch(weight, Y, jump, N - 1, 0);
        if (maxId >= 0)
            found2 = true;
        
        result[i] = (maxId - minId) + 1;
    }
           
    REP(i, 0, Q)
        cout << result[i] << "\n";
}

int minSearch(int arr[], int key, int jump, int start, int end)
{
    int step = jump;
    int prev = 0;

    while (arr[min(step, end) - 1] <= key)
    {
        prev = step;
        step += jump;

        if (prev >= end)
            return end;
    }

    while(prev < end)
    {
        if (arr[prev] > key)
            return prev;
        else
            prev++;
    }

    return prev;
}

int maxSearch(int arr[], int key, int jump, int start, int end)
{
    int step = start - jump;
    int prev = start;

    while (arr[max(step, end)] > key)
    {
        prev = step;
        step -= jump;

        if (prev < 0)
            return -1;
    }

    while (prev >= end)
    {
        if (arr[prev] <= key)
            return prev;
        else
            prev--;
    }

    return prev;
}