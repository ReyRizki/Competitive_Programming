// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/72/

#include <iostream>

using namespace std;

void draw(int N) {
    // DECLARATION
    int i;                              // for iteration, as usual

    // PROCESS
    if (N > 0) {
        draw(N-1);
        for (i = 1; i <= N; i++) {
            cout<<'*';
        }
        cout<<endl;
        draw(N-1);
    }
}

int main() {
    // DECLARATION
    int pattern;                        // input

    // INPUT 
    cin>>pattern;

    // OUTPUT
    draw(pattern);

    return 0;
}