#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // DATA STRUCTURE
    vector<int> prime;
    int T;
    int K[77000];
    int tester;
    int max;

    // ALGORITHM
    cin >> T;

    max = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> K[i];
        if (K[i] > max)
            max = K[i];
    }

    prime.push_back(2);
    tester = 2;

    // cout << max << endl;
    // cout << prime.size() << endl;
    auto end = prime.size();
    int i = 0;

    while ((prime.size() < max) && (i < end))
    {
        tester++;

        if (tester % prime.at(i) != 0)
        {
            prime.push_back(tester);
            end = prime.size();
        }

        i++;
    }

    for (int i = 0; i < T; i++)
        cout << prime.at(K[i]) << endl;

    return 0;
}