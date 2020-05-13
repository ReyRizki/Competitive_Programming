#include <iostream>

using namespace std;

int main()
{
    // DATA STRUCTURE
    int R, C;
    char block[20][8];
    int countLost;
    bool isLost;
    int point;
    int first;

    // ALGORITHM
    // input matrix
    cin>>R>>C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin>>block[i][j];
        }
    }
        
        
    do
    {
        // pencarian banyak baris yang hilang
        point = 0;
        countLost = 0;
        for (int i = 0; i < R; i++)
        {
            isLost = true;
            for (int j = 0; j < C; j++)
            {
                if (block[i][j] == '0')
                {
                    isLost = false;
                    break;
                }
            }
            // cout << isLost << endl;
                

            if (isLost)
            {
                countLost++;
                
                for (int j = 0; j < C; j++)
                {
                    block[i][j] = '0';
                }

                first = i;
            }     

            // cout << countLost << endl;    
        }

        
        if (countLost > 0)
        {
            for (int j = 0; j < C; j++)
            {
                // telusur ke bawah
                int i = first;
                while ((block[i][j] != '1') && (i < R))
                {
                    point = i;
                    i++;
                }
                // cout << i << " " << point << endl;

                // telusur ke atas
                for (int k = point - 1; k >= 0; k--)
                {
                    if (block[k][j] == '1')
                    {
                        block[k][j] = '0';
                        block[point][j] = '1';
                        point--;
                    }
                }
            }
        }
    } while(countLost > 0);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout<<block[i][j];

        cout<<endl;
    }
}