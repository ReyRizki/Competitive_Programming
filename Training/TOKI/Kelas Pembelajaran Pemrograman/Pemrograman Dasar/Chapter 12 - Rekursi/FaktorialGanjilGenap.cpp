// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/17/problems/67/

#include <iostream>

using namespace std;

// to find factorial odd-even
int factorial(int N) {
    if (N == 1) {
        return 1;
    } else if (N % 2 == 0) {
        return (N/2) * factorial(N-1);
    } else {
        return N * factorial(N-1);
    }
}


int main() {
    // DECLARATION
    int number;                                         // for input

    // INPUT 
    cin>>number;

    // OUTPUT
    cout<<factorial(number)<<endl;

    return 0;
}