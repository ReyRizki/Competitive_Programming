#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int maxResult = -64;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vector<int> temp(7);

            temp.push_back(arr[i][j]);
            temp.push_back(arr[i][j + 1]);
            temp.push_back(arr[i][j + 2]);
            temp.push_back(arr[i + 1][j + 1]);
            temp.push_back(arr[i + 2][j]);
            temp.push_back(arr[i + 2][j + 1]);
            temp.push_back(arr[i + 2][j + 2]);

            int sumResult = accumulate(temp.begin(), temp.end(), 0);
            
            maxResult = max(maxResult, sumResult);
        }
    }

    return maxResult;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}
