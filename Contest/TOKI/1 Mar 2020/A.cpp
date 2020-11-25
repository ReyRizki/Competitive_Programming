#include <iostream>

using namespace std;
 
int main()
{
    string S;
    cin >> S;
    
    int len = S.length();
    // cout << len << endl;
    int x = 0;
    int y = 0;

    for (int i = 0; i < len; i++)
    {
        switch(S[i])
        {
        case 'R':
            ++x;
            break;

        case 'L':
            --x;
            break;

        case 'U':
            ++y;
            break;

        case 'D':
            --y;
            break;

        default:
            break;
        }
    }

    cout << x << " " << y << "\n";

    return 0;
}