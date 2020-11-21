#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

typedef struct Ele{
    int d, m, y, c;

    // Ele(int dt, int mo, int ye, int co)
    // {
    //     d = dt;
    //     m = mo;
    //     y = ye;
    //     c = co;
    // }
} Ele;

// function to check leap year
bool isLeap(int y)
{
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                return 1;

            return 0;
        }

        return 1;
    }

    return 0;
}

// function to get last day of a month
// params = month, year
int getLastDay(int m, int y)
{
    // use switch case
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31; break;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30; break;

    // for February, check if it's a leap year or not
    case 2:
        return 28 + isLeap(y); break;

    default:
        break;
    }

    return 0;
}

// function to check if two dates are conscutive
// params = current, prev
bool isConsecutive(Ele curr, Ele prev)
{
    // dec prev date
    curr.d--;

    // if date becomes -1, change to last day (other function)
    if (curr.d == 0)
    {
        curr.m--;

        if (curr.m == 0)
        {
            curr.m = 12;
            curr.y--;
        }

        curr.d = getLastDay(curr.m, curr.y);
    }

    // cout << prev.d << " " << prev.m << " " << prev.y << " " << prev.c << "\n";
    // cout << curr.d << " " << curr.m << " " << curr.y << " " << curr.c << "\n";

    // return if current and prev match
    return (prev.d == curr.d) and (prev.m == curr.m) and (prev.y == curr.y);
}

void solve(int n)
{   
    // Ele prev = Ele(28, 2, 1978, 112);
    // Ele curr = Ele(1, 3, 1978, 113);

    // cout << (isConsecutive(curr, prev) ? "Yes" : "No");
    // input 1 line, store in first and prev
    Ele first, prev; cin >> first.d >> first.m >> first.y >> first.c;
    // cout << first.d << " " << first.m << " " << first.y << " " << first.c << "\n";
    prev = first;

    // declare cont = 1
    // declare maxDays = 1, result = 0
    int cont = 0, maxDays = 0, result = 0, numCont = 0;

    // loop from 1 till n - 1
    REP(i, 1, n)
    {
        // input 1 line
        Ele curr; cin >> curr.d >> curr.m >> curr.y >> curr.c;
        // cout << prev.d << " " << prev.m << " " << prev.y << " " << prev.c << "\n";
        // cout << curr.d << " " << curr.m << " " << curr.y << " " << curr.c << " " << (isConsecutive(curr, prev) ? "Yes" : "No") << "\n";
        bool consec = isConsecutive(curr, prev);

        // if (consec)
        //     cout << i << "\n";
        // cout << (consec ? "Yes" : "No") << "\n";
        // check if concsecutive or not
        // if true
        if (consec)
            cont++;
        
        if ((not consec) or (i == (n - 1)))
        {
            // update result
            if ((i == (n - 1)) and consec)
                result += curr.c - first.c;
            else
                result += prev.c - first.c;

            // update first
            first = curr;

            // update maxDays
            // if (cont > 0)
            //     numCont++;

            // reset cont = 1
            // cont = 0;
        }
        
        // store in prev
        prev = curr;
    }
    // cout << "\n";

    // print maxDays and result
    // if (maxDays > 0)
    //     maxDays++;
    cout << cont << " " << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    // int t = 1; // cin >> t;
    int n;
    while (1)
    {
        // input n
        cin >> n;

        if (n == 0)
            break;

        solve(n);
    }

    return 0;
}

