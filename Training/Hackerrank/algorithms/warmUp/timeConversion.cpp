#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    if (s.substr(8, 2).compare("AM") == 0)
    {
        if (s.substr(0, 2).compare("12") == 0)
            s.replace(0, 2, "00");
    }
    else
    {
        if (s.substr(0, 2).compare("12") != 0)
        {
            int hour = stoi(s.substr(0, 2)) + 12;
            s.replace(0, 2, to_string(hour));
        }
    }

    return s.substr(0, 8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}
