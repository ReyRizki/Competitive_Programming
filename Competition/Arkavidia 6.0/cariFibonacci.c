#include <stdio.h>

long long int fibonacci(int num)
{
    if ((num == 1) || (num == 2))
    {
        return 1;
    }
    else
    {
        return (fibonacci(num - 2) + fibonacci(num -1));
    }
}

int main()
{
    long long int N;
    long long int arr[100000];
    long long int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("%lld\n", fibonacci(arr[i]) % 1000000007);
    }

    return 0;
}