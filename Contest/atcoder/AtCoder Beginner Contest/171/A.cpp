#include <iostream>

using namespace std;

int main()
{
    char alpha;

    cin >> alpha;

    cout << (alpha >= 'A' and alpha <= 'Z' ? 'A' : 'a') << "\n";

    return 0;
}