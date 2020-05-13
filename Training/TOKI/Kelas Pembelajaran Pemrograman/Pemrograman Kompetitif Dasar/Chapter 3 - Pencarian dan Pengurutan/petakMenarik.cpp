#include <iostream>

#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPR(i, a, b) for (int i = a - 1; i >= b; i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M >> K;

    int mat[100][100];
    REP(i, 0, N)
        REP(j, 0, M)
            cin >> mat[i][j];

    // REP(i, 0, N){
    //     REP(j, 0, M)
    //         cout << mat[i][j] << " ";

    //     cout << "\n";        
    // }
        
    int result;
    int x = 0, y = 0;
    REPR(j, M, 0)
    {
        REPR(i, N, 0)
        {
            result = 1;
            if ((i >= 0) && (i < N-1))
                result *= mat[i+1][j];

            if ((i > 0) && (i <= N-1))
                result *= mat[i-1][j];

            if ((j >= 0) && (j < M-1))
                result *= mat[i][j+1];
            
            if ((j > 0) && (j <= M-1))
                result *= mat[i][j-1];

            // cout << result << "\n";

            if (result == K)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << x << " " << y << "\n";

    return 0;
}