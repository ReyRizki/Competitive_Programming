#include <iostream>
#include <stack>
#include <utility>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)
#define max 1000000000

using namespace std;

string decode(u int numb, string S);
bool isDirection(char c);
bool isNumber(char c);
u int toNumb(char c);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        string S;
        cin >> S;

        string order = decode(1, S);
        pair<u int, u int> coordinate = make_pair(1, 1);

        cout << order << endl;
        u int len = order.length();
        REP(j, 0, len)
        {
            switch (order[j])
            {
            case 'W':
                coordinate.first -= 1;
                if (coordinate.first == 0)
                    coordinate.first = max;
                break;

            case 'E':
                coordinate.first += 1;
                if (coordinate.first == max + 1)
                    coordinate.first = 0;
                break;
            
            case 'N':
                coordinate.second -= 1;
                if (coordinate.second == 0)
                    coordinate.second = max;
                break;

            case 'S':
                coordinate.second += 1;
                if (coordinate.second == max + 1)
                    coordinate.second = 0;
                break;
            }

        }
        // cout << "Case #" << i + 1 << ": " << coordinate.first << " " << coordinate.second << "\n";
    }
}

bool isDirection(char c)
{
    return c == 'N' or c == 'E' or c == 'W' or c == 'S';
}

bool isNumber(char c)
{
    return c >= '1' and c <= '9';
}

u int toNumb(char c)
{
    return c - '0';
}

string decode(u int numb, string S)
{
    string result;
    u int len = S.length();

    REP(i, 0, numb)
    {
        u int j = 0;
        while (j < len)
        {
            if (isDirection(S[j]))
            {
                result.push_back(S[j]);
                j++;
            }
            else if (isNumber(S[j]))
            {
                u int pivot = j + 1, k = j + 1;
                stack<char> parentheses;
                do {
                    if (S[k] == '(')
                        parentheses.push(S[k]);
                    else if (S[k] == ')')
                        parentheses.pop();

                    k++;
                } while (!parentheses.empty());

                result.append(decode(toNumb(S[pivot - 1]), S.substr(pivot + 1, k - pivot - 2)));
                j += k-1;
            }
        }    
    }

    return result;
}