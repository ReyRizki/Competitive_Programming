#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int T;
    vector<int> number[1000];
    vector<int>::iterator it;

    cin >> T;
    getchar();
    for (int i = 0; i < T; i++)
    {
        int n, sum;
        cin >> n;
        getchar();
        for (int j = 0; j < n; j++)
        {
            char x;
            scanf("%c", &x);
            x -= 48;
            sum += x;
            number[i].push_back(x);
        }
        // cout << sum << endl;

        while (number[i].back() % 2 == 0)
        {
            // cout << "hilangkan genap di akhir" << endl;
            sum -= number[i].back();
            number[i].pop_back();
            n--;
        }

        if (sum % 2 == 1)
        {
            // cout << "membuat sum jadi genap" << endl;
            int j = n - 2;
            bool deleted = false;
            while (!deleted and (j > 0))
            {
                if (number[i].at(j) % 2 == 1)
                {
                    sum -= number[i].at(j);
                    it = number[i].begin() + j;
                    number[i].erase(it);
                    deleted = true;
                }
                else
                {
                    j--;
                }
            }
        }
        // cout << sum << endl;

        if ((number[i].size() == 1) || (number[i].back() % 2 == 0) || (sum % 2 == 1))
        {
            // cout << "akhir" << endl;
            number[i].clear();
            number[i].push_back(-1);
        }
    }

    for (int i = 0; i < T; i++)
    {
        for (auto it = number[i].begin(); it < number[i].end(); it++)
            cout << *it;

        cout << "\n";
    }

    return 0;
}