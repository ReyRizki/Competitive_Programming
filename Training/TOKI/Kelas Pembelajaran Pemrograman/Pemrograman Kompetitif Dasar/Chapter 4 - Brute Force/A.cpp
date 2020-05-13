#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

const int SIZE = 75;

bool isIdentic(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE]);

bool horizontally(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE]);

bool vertically(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE]);

bool slash(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE]);

bool backslash(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE]);

int main()
{
    int N;
    int m1[SIZE][SIZE], m2[SIZE][SIZE];
    cin >> N >> N;
    REP(i, 0, N)
    REP(j, 0, N)
    cin >> m1[i][j];

    cin >> N >> N;
    REP(i, 0, N)
    REP(j, 0, N)
    cin >> m2[i][j];

    if (isIdentic(N, m1, m2))
        cout << "identik";
    else if (horizontally(N, m1, m2))
        cout << "horisontal";
    else if (vertically(N, m1, m2))
        cout << "vertikal";
    else if (slash(N, m1, m2))
        cout << "diagonal kanan bawah";
    else if (backslash(N, m1, m2))
        cout << "diagonal kiri bawah";
    else
        cout << "tidak identik";

    cout << "\n";
}

bool isIdentic(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE])
{
    REP(i, 0, max)
        REP(j, 0, max)
            if (mat1[i][j] != mat2[i][j])
                return false;

    return true;
}

bool horizontally(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE])
{
    REP(i, 0, max)
        REP(j, 0, max)
            if (mat1[i][j] != mat2[max - i - 1][j])
                return false;

    return true;
}

bool vertically(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE])
{
    REP(i, 0, max)
        REP(j, 0, max)
            if (mat1[i][j] != mat2[i][max - j - 1])
                return false;

    return true;
}

bool slash(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE])
{
    REP(i, 0, max)
        REP(j, 0, max)
            if (((i == j) && (mat1[i][j] != mat2[i][j])) || ((i != j) && (mat1[i][j] != mat2[j][i])))    
                return false;

    return true;
}

bool backslash(int max, int mat1[SIZE][SIZE], int mat2[SIZE][SIZE])
{
    REP(i, 0, max)
        REP(j, 0, max)
            if (mat1[i][j] != mat2[max - 1 -j][max - 1 -i])
                return false;

    return true;
}