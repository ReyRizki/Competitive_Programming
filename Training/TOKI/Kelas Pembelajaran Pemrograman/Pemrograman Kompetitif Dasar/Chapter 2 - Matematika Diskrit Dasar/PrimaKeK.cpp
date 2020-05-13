#include <iostream> 
#include <vector> 

using namespace std;

int main()
{
    // DATA STRUCTURE
    vector<int> prime;
    vector<int> numbers;
    int T;
    int K;
    int tester = 0;
    
    // ALGORITHM
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> K;
        prime.push_back(2);
        tester = 2;

        while (prime.size() < K)
        {
            auto end = prime.size();
            for (int j = 0; j < end; j++)
            {
                tester++;

                if (tester % prime.at(j) != 0)
                    prime.push_back(tester);
            }
        }

        numbers.push_back(prime.back());

        prime.clear();
    }

    for (auto it = numbers.begin(); it < numbers.end(); it++)
        cout << *it <<endl;

    return 0;
}