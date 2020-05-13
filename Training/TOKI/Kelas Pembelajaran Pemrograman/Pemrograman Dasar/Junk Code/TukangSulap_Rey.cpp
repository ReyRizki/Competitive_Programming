// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/13/problems/46/

#include <iostream>

using namespace std;

// for swapping two integers
void swapping(int *a, int *b);

int main() {
    // DECLARATION
    int balls;                          // the balls of in a line, as input too
    int coloumn[2][1000];               // the balls in a coloumn
    int swap;                           // number of swaps
    char row1, row2;                    // row swap
    int number1, number2;               // number swap 
    int i, j;                           // for iteration, as usual

    // INPUT 
    cin>>balls;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < balls; j++) {
            
        }
    }

    cin>>swap;

    // AND ALSO PROCESSING, AWSOME
    for (i = 0; i<swap; i++) {
        cin>>row1;
        cin>>row2;

        cin>>row1>>number1>>row2>>number2;
        
        swapping(&coloumn[row1-'A'][number1--], &coloumn[row2-'A'][number2--]);
    }

    // OUTPUT 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < balls; j++) {
            cout<<coloumn[i][j];
            if (j < balls-1) {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void swapping(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}