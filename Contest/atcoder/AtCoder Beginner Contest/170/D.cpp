#include <iostream>
#include <set>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    // u int N, count = 0;
    // cin >> N;

    // set<int> numbers, banned;
    // REP(i, 0, N)
    // {
    //     u int x;
    //     cin >> x;

    //     if (!numbers.count(x))
    //     {
    //         count++;
    //         numbers.insert(x);
    //     }
    //     else if (numbers.count(x) and !banned.count(x))
    //     {
    //         count--;
    //         banned.insert(x);
    //     }
    // }

    // cout << count << "\n";

    // for (auto i = numbers.begin(); i != prev(numbers.end(), 1); i++)
    // {
    //     for (auto k = numbers.begin(); k != numbers.end(); k++)
    //         cout << *k << " ";
    //     cout << "\n";

    //     for (auto j = next(i, 1); j != numbers.end(); j++)
    //     {
    //         if ((*j % *i == 0))
    //         {
    //             if (!banned.count(*j))
    //             {
    //                 cout << *j << "\n";
    //                 count--;
    //             }
    //             numbers.erase(j);
    //             // continue;
    //         }
    //     }
    // }

    // cout << count << "\n";

    // for (auto i = numbers.begin(); i != prev(numbers.end(), 1); i++)
    //     cout << *i << " ";
    // cout << "\n";

    // for (auto i = banned.begin(); i != banned.end(); i++)
    //     cout << *i << " ";
    // cout << "\n";
    // cout << count << "\n";

    set<int> numbers, banned;
    u int count = 4;

    numbers.insert(2);
    numbers.insert(4);
    // numbers.insert(8);
    // numbers.insert(18);
    // numbers.insert(19);
    // numbers.insert(28);

    auto i = numbers.begin();
    numbers.erase(i);

    cout << *numbers.begin() << "\n";
    cout << numbers.size() << "\n";

    // for (auto i = numbers.begin(); i != prev(numbers.end(), 1); i++)
    // {
    //     // for (auto k = numbers.begin(); k != numbers.end(); k++)
    //     //     cout << *k << " ";
    //     // cout << "\n";

    //     for (auto j = next(i, 1); j != numbers.end(); j++)
    //     {
    //         cout << *j << "\n";

    //         if ((*j % *i == 0))
    //         {
    //             if (!banned.count(*j))
    //             {
    //                 count--;
    //             }
    //             numbers.erase(j);
    //         }
    //     }
    // }

    // cout << count << "\n";
}