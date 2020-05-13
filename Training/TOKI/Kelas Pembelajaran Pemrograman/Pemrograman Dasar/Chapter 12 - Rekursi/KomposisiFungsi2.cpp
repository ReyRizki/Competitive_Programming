// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/17/problems/68/

#include <iostream>
#include <cmath>

using namespace std;

int A, B;

int composition(int constanta, int repetitor) {
    if (repetitor == 0) {
        return constanta;
    } else {
        return abs(A * composition(constanta, repetitor-1) + B);
    }
}

int main() {
    // DECLARATION
    int X, K;

    // INPUT 
    scanf("%d %d %d %d", &A, &B, &K, &X);

    // OUTPUT
    cout<<composition(X, K)<<endl;

    return 0;
}