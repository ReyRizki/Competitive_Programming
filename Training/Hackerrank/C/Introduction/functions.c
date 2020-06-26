#include <stdio.h>

#ifndef MACROS
#define MACROS

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (i = (a-1); i >= (b); i--)

#endif

int maxOf4(int nums[])
{
    int max = __INT32_MAX__ + 1;

    REP(i, 0, 4)
        if (nums[i] > max)
            max = nums[i];

    return max;
}

int main()
{
    int nums[4];

    REP(i, 0, 4)
        scanf("%d", &nums[i]);

    printf("%d\n", maxOf4(nums));

    return 0;
}