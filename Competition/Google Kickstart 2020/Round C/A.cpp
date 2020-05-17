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
    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int N, K;
        cin >> N >> K;

        vector<int> A(N);
        REP(it, A.begin(), A.end())
            cin >> *it;
        
        bool counting = 0;
        u int count = 0, temp;
        REP(it, A.begin(), A.end())
        {
            if (counting and *it != K)
            {
                if ((temp--) == *it)
                {
                    if (temp == 0)
                        count++;
                }
                else
                    counting = 0;
            }
            else
            {
                if (K == *it)
                {
                    counting = 1;
                    temp = K - 1;
                }
            }
        }

        cout << "Case #" << i + 1 << ": " << count << "\n";
    }
}