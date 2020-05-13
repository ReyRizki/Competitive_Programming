// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/76/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// DECLARATION FOR GLOBAL VARIABLE
int matrix[128][128];                           // the matrix

void decode(string spec, int size, int row, int coloumn) {
    if (spec.length() == 1) {
        for (int i = row; i < row + size; i++) {
            for (int j = coloumn; j < coloumn + size; j++) {
                matrix[i][j] = 1;
            }
        }
    } else {
        size /= 2;
        switch (spec[1]) {
            case '0':
                decode(spec.substr(1, spec.length() - 1), size, row, coloumn);
                break;
            case '1':
                decode(spec.substr(1, spec.length() - 1), size, row, coloumn + size);
                break;
            case '2':
                decode(spec.substr(1, spec.length() - 1), size, row + size, coloumn);
                break;
            case '3':
                decode(spec.substr(1, spec.length() - 1), size, row + size, coloumn + size);
                break;
        }
    }
}

int main() {
    // DECLARATION
    int jumlahKode;
    string kode[128 * 128];
    int r, c;
    int maxRC;                                      // finding max value of r and c
    int pow2;                                       // 2^p with p minimum

    // INPUT
    scanf("%d", &jumlahKode);
    for (int i; i < jumlahKode; i++) {
        cin>>kode[i];
    }
    scanf("%d %d", &r, &c);

    // PROCESS
    // making the matrix become 2^p * 2^p with p minimum
    maxRC = max(r, c);

    pow2 = 1;
    while (pow2 < maxRC) {
        pow2 *= 2;
    }

    // giving the matrix with all 0
    for (int i = 0; i < pow2; i++) {
        for (int j = 0; j < pow2; j++) {
            matrix[i][j] = 0;
        }
    }

    // decoding the codes
    for (int i = 0; i < jumlahKode; i++) {
        if (kode[i].length() > 1) {
            switch (kode[i][1]) {
                case '0':
                    decode(kode[i].substr(1, kode[i].length() - 1), pow2/2, 0, 0);
                    break;
                case '1':
                    decode(kode[i].substr(1, kode[i].length() - 1), pow2/2, 0, pow2/2);
                    break;
                case '2':
                    decode(kode[i].substr(1, kode[i].length() - 1), pow2/2, pow2/2, 0);
                    break;
                case '3':
                    decode(kode[i].substr(1, kode[i].length() - 1), pow2/2, pow2/2, pow2/2);
                    break;
            }
        } else if (kode[i].length() == 1) {
            decode(kode[i], pow2, 0, 0);
        }
    }

    // OUTPUT
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout<<matrix[i][j];
            if (j < c-1) {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}