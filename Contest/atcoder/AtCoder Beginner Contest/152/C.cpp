#include <iostream>

using namespace std;

unsigned long long int factorial(int number);

unsigned long long int permutation(int n, int r);

int main()
{
    int N, prev = 0, input, count = 1;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        if (input <= prev)
            count++;

        prev = input;
    }

    cout << count << endl;
    
    return 0;
}

unsigned long long int factorial(int number)
{
    return ((number == 0 || number == 1)) ? 1 : number * factorial (number -1);
}

unsigned long long int premutation(int n, int r)
{
    return 
}