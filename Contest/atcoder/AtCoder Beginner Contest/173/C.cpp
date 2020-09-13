#include <iostream>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    int H, W, K; cin >> H >> W >> K;
    vector<string> c;

    REP(i, 0, H)
    {
        string temp; cin >> temp;
        c.push_back(temp);
    }

    // REP(i, 0, H)
    //     cout << c[i] << "\n";

    int result = 0;

    for (int maskR = 0; maskR < (1 << H); maskR++)
    {
        for (int maskC = 0; maskC < (1 << W); maskC++)
        {
            int black = 0;

            for (int i = 0; i < H; i++)
                for (int j = 0; j < W; j ++)
                    if ((((maskR >> i) & 1) == 0) and (((maskC >> j) & 1) == 0) and (c[i][j] == '#'))
                        black++;

            if (black == K)
                result++;
        }
    }

    cout << result << "\n";
}