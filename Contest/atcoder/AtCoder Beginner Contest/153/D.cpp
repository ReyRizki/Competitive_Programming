#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int result(unsigned long long int number)
{
    return (number == 1) ? 1 : ((number / 2) * 2) + result(number / 2);
}

int main()
{
    unsigned long long int N;

    cin >> N;

    cout << result(N) << "\n";
}