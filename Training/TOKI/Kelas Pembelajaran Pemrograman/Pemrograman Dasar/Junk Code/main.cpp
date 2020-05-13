#include <stdio.h>

int main() {
    int Matriks[101][101], X, Y, i, j;
    
    scanf("%d %d", &X, &Y);
    for (i=0; i<X; i++) {
        for (j=0; j<Y; j++) {
            scanf("%d", &Matriks[X][Y]);
        }
    }
    for (i=0; i<X; i++) {
        for (j=Y-1; j>=0; j--) {
            if (j==0) {
                printf("%d\n", Matriks[j][i]);
            } else {
                printf("%d ", Matriks[j][i]);
            }
        }
    }
    return 0;
}
