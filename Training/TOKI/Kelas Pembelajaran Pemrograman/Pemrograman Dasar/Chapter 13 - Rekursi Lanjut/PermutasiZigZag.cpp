// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/73/

#include <iostream>

using namespace std;

int N;
int catat[9];
bool pernah[9];

void tulis(int kedalaman) {
    bool zigzag;

    if (kedalaman >= N) {
        zigzag = true;
        bool bigger, smaller;

        if (N > 2) {
            for (int i = 1; i < N-1; i++) {
                bigger = (catat[i] > catat[i-1]) && (catat[i] > catat[i+1]);
                smaller = (catat[i] < catat[i-1]) && (catat[i] < catat[i+1]);
                if (!(bigger || smaller)) {
                    zigzag = false;
                }
            }
        }
        
        // Cetak
        if (zigzag) {
            for (int i = 0; i < N; i++) {
                printf("%d", catat[i]); 
            }
            printf("\n");
        }
    } else {
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin>>N;

    tulis(0);
}