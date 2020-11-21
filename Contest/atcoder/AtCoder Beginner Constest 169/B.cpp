#include <iostream>
#include <vector>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool isZero(u ll int n)
{
    return n == 0;
}

ll int solution(vector<u ll int> A)
{
    if (any_of(A.begin(), A.end(), isZero))
        return 0;
    else
    {
        u ll int result = 1;

        REP(it, A.begin(), A.end())
        {
            result *= *it;

            // cout << result << endl;

            if (result > 1000000000000000000)
            {
                return -1;
            }
        }

        return result;
    }
}

int main()
{
    u int N;
    cin >> N;

    vector<u ll int> A(N);
    REP(it, A.begin(), A.end())
        cin >> *it;

    // cout << 1000000000000000000 << endl;
    cout << solution(A) << "\n";

    return 0;
}