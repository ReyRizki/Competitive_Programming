#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int x = -1 + (((a-1) * 3) / 2);

    if (x % 2 == 0)
        x += 2;

    cout << x << endl;
}