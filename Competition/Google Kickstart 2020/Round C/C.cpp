#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

// void solution(vector<int> A, vector<int> &sub, u int *count, u int N, u int k)
// {
//     if (k == N)
//     {
//         double intpart;

//         // REP(it, sub.begin(), sub.end())
//         //     cout << *it << " ";
//         // cout << "\n";

//         // cout << sqrt(accumulate(sub.begin(), sub.end(), 0)) << "\n";
//         // cout << modf(sqrt(accumulate(sub.begin(), sub.end(), 0)), &intpart) << "\n";
//         if (!sub.empty())
//             if ((modf(sqrt(accumulate(sub.begin(), sub.end(), 0)), &intpart)) == 0)
//             {
//                 // REP(it, sub.begin(), sub.end())
//                 //     cout << *it << " ";
//                 // cout << "\n";
//                 *count = *count + 1;
//             }

//         // cout << *count << "\n";
//     }
//     else
//     {
//         sub.push_back(A[k]);
//         solution(A, sub, count, N, k + 1);

//         sub.pop_back();
//         solution(A, sub, count, N, k + 1);
//     }
    
// }

int main()
{
    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int N;
        cin >> N;
        
        vector<int> A(N);
        REP(it, A.begin(), A.end())
            cin >> *it;

        vector<int>sub;
        u int count = 0;
        // solution(A, sub, &count, N, 0);

        u int sum = 0;
        REP(j, 0, N)
        {
            sum = A[j];
            REP(k, j + 1, N + 1)
            {
                sum += A[k];
                double part;
                if (modf(sqrt(sum), &part) == 0)
                    count++;
            }
        }

        cout << "Case #" << i + 1 << ": " << count << "\n";
        // cout << count << "\n";
    }
}