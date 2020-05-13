#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // DATA STRUCTURE
    int prime[77777];
    int T;
    int K[20000];
    int tester;
    int max;
    bool isPrime;

    // ALGORITHM
    cin >> T;

    max = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> K[i];
        if (K[i] > max)
            max = K[i];
    }

    prime[0] = 2;
    tester = 2;

    // cout << max << endl;
    // cout << prime.size() << endl;
    int end = 1;

    while (end < max)
    {
        tester++;

        int i = 0;
        isPrime = true;
        while (isPrime && (i * i < end))
        {
            if (tester % prime[i] == 0)
            {
                isPrime = false;
            }
            else
            {
                i++;
            }
            
        }

        if (isPrime)
        {
            prime[end] = tester;
            end++;
        }
    }

    for (int i = 0; i < T; i++)
        cout << prime[K[i] - 1] << endl;

    return 0;
}