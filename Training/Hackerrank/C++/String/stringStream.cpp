#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream iss(str);
    vector<int> result;

    for (int i; iss >> i;)
    {
        result.push_back(i);

        if (iss.peek() == ',')
            iss.ignore();
    }

    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}