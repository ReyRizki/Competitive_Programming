#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input1, input2;

    cin >> input1;
    cin >> input2;

    if (input2.length() > input1.length())
        input2.swap(input1);

    if (input2.length() + 1 == input1.length())
    {
        int i = 0;

        while ((input1[i] == input2[i]) && (i < input2.length()))
            i++;

        if (i == input2.length())
        {
            cout << "Tentu saja bisa!\n";
        }
        else
        {
            string end1 = input1.substr(i + 1, input1.length() - (i + 1));
            string end2 = input2.substr(i, input2.length() - i);

            if (end1 == end2)
                cout << "Tentu saja bisa!\n";
            else
                cout << "Wah, tidak bisa :(\n";
        }
    }
    else
    {
        cout << "Wah, tidak bisa :(\n";
    }
}