#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    do
    {
        if (N == 0)
        {
            cout << "1";
        }
        else if (N == 1)
        {
            cout << "0";
            N--;
        }
        else
        {
            if (N & 1)
            {
                cout << "4";
                N--;
            }
            else
            {
                cout << "8";
                N -= 2;
            }
        }
    } while (N > 0);

    cout << "\n";

    return 0;
}