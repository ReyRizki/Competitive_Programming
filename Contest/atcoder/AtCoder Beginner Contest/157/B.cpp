#include <iostream>

using namespace std;

#define MAX 3
#define REP(i, a, b) for (int i = (a); i < (b); i++)

void marking(int arr[MAX][MAX], bool *marked, int b);

bool isBingo(int arr[MAX][MAX], bool marked[MAX][MAX]);

int main()
{
    int arr[3][3];
    REP(i, 0, 3)
    REP(j, 0, 3)
    cin >> arr[i][j];

    bool marked[3][3];
    REP(i, 0, 3)
    REP(j, 0, 3)
    marked[i][j] = false;

    int N;
    cin >> N;
    REP(i, 0, N)
    {
        int b;
        cin >> b;
        marking(arr, &marked[0][0], b);
    }

    isBingo(arr, marked) ? cout << "Yes" : cout << "No";
    cout << "\n";

    return 0;
}

void marking(int arr[MAX][MAX], bool *marked, int b)
{
    REP(i, 0, 3)
    {
        REP(j, 0, 3)
        {
            if ((*((marked + i * 3) + j) == false) && (arr[i][j] == b))
            {
                *((marked + i * 3) + j) == true;
            }
        }
    }
}

bool isBingo(int arr[MAX][MAX], bool marked[MAX][MAX])
{
    bool result;

    REP(i, 0, 3)
    if (marked[i][0] && marked[i][1] && marked[i][2])
        return true;

    REP(j, 0, 3)
    if (marked[0][j] && marked[1][j] && marked[2][j])
        return true;

    if (marked[0][0] && marked[1][1] && marked[2][2])
        return true;

    if (marked[2][0] && marked[1][1] && marked[0][2])
        return true;

    return false;
}