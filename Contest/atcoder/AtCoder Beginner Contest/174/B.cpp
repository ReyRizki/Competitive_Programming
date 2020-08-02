#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    float D;
    cin >> N >> D;

    int count = 0;

    while (N--)
    {
        float x, y;
        cin >> x >> y;

        if (sqrt(pow(x, 2) + pow(y, 2)) <= D)
        {
            // cout << "masuk\n";
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}