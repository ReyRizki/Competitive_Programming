#include <iostream>
#include <string>

using namespace std;

bool isHitachi(string S)
{
    string sub = S.substr(0, 2);
    string comparator = "hi";

    if (S.length() == 0)
        return true;
    else if (S.length() < 2)
        return false;
    else
    {
        if (sub.compare(comparator) == 0)
            return isHitachi(S.substr(2, S.length() - 2));
        else
            return false;
    }
}

int main()
{
    string S;

    cin >> S;

    isHitachi(S) ? cout << "Yes" : cout << "No";
    cout << "\n";

    return 0;
}