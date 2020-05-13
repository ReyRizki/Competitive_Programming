#include <iostream>
#include <string.h>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int N;
    cin >> N;

    char name[1000][11];
    int att[1000];
    REP(i, 0, N)
    {
        cin >> name[i];
        
        int j = i;
        while ((j > 0) && (strcmp(name[j], name[j-1]) < 0))
        {
            char temp[11];

            strcpy(temp, name[j]);
            strcpy(name[j], name[j-1]);
            strcpy(name[j-1], temp);
            j--;
        }

        att[i] = j+1;
    }
        
    REP(i, 0, N)
        cout << att[i] << "\n";

    return 0;
}