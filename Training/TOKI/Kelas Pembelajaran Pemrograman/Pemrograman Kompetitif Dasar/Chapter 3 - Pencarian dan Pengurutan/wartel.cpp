#include <iostream>

#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

struct list
{
    string name;
    string number;
};

struct list people[100000];

int binarySearch(int left, int right, string key)
{
    int mid = (right + left) / 2;
    return (right >= left) ? (key.compare(people[mid].name) == 0) ? mid : (key.compare(people[mid].name) > 0) ? binarySearch(mid+1, right, key) : binarySearch(left, mid - 1, key) : -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;
    REP(i, 0, N)
        cin >> people[i].name >> people[i].number;

    string find[100000];
    REP(i, 0, Q)
        cin >> find[i];

    REP(i, 0, Q)
    {
        int result = binarySearch(0, N-1, find[i]);
        (result != -1) ? cout << people[result].number << "\n" : cout << "NIHIL" << "\n";
    }
}