#include <iostream>
#include <string.h>

#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a); i >= (b); i--)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    char name[500][11], temp[11];
    REP(i, 0, N)
        cin >> name[i];

    REP(i, 0, N)
    {
        REPR(j, N-1, i+1)
        {
            if (strlen(name[j]) < strlen(name[j-1]))
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j-1]);
                strcpy(name[j-1], temp);
            }
            else if ((strlen(name[j]) ==  strlen(name[j-1])) && (strcmp(name[j], name[j-1]) < 0))
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j-1]);
                strcpy(name[j-1], temp);
            }
        }
    }

    REP(i, 0, N)
        cout << name[i] << "\n";

    return 0;
}