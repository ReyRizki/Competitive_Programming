#include <iostream>

using namespace std;

int main()
{
    // DECLARATION
    int N;
    int A[100000];
    int Q;
    int l[100000], r[100000];
    int diff, diffNow;
    int maxLength[100000];
    int length;

    // ALGORITHM
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        scanf("%d", &l[i]);
        scanf("%d", &r[i]);

        l[i]--;
        r[i]--;

        // length = 0;
        // maxLength[i] = 0;

        // diffNow = A[l+1] - A[l];
        // for (int j = l; j < r; j++)
        // {
        //     diff = A[j+1] - A[j];
        //     if (diff == diffNow)
        //     {
        //         length++;
        //     }
        //     else
        //     {
        //         diffNow = diff;
        //         length = 1;
        //     }

        //     if (length > maxLength[i])
        //     {
        //         maxLength[i] = length;
        //     }
        // }
    }

    for (int i = 0; i < Q; i++)
    {
        length = 0;
        maxLength[i] = 0;

        diffNow = A[l[i] + 1] - A[l[i]];
        for (int j = l[i]; j < r[i]; j++)
        {
            diff = A[j + 1] - A[j];
            if (diff == diffNow)
            {
                length++;
            }
            else
            {
                diffNow = diff;
                length = 1;
            }

            if (length > maxLength[i])
            {
                maxLength[i] = length;
            }
        }

        printf("%d\n", maxLength[i] + 1);
    }

    return 0;
}