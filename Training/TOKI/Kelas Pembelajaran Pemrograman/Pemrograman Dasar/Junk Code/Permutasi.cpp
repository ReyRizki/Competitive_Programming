#include <iostream>

using namespace std;

int N;
int catat[8];
bool pernah[8];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        for (int i = 0; i < N; i++) {
            printf("%d", catat[i]); // Cetak
        }
        printf("\n");
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