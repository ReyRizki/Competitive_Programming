#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;

    cin >> S;
    ((S[2] == S[3]) and (S[4] == S[5])) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}