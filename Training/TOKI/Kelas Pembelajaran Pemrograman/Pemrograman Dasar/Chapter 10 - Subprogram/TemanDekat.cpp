// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/13/problems/50/

#include <iostream>

using namespace std;

// To find power of a number
int pow(int basic, int power) {
    if (power == 1) {
        return basic;
    } else {
        return (basic * pow(basic, power-1));
    }
}

// To find the absolute value
int abs(int x) {
    if (x >= 0) {
        return x;
    } else {
        return -x;
    }
}

struct factor {
    int x;
    int y;
};

int main() {
    // DECLARATION
    int students;                       // number of the students
    int powered;                        // the constanta
    int i, j;                           // for iteration, as usual
    int closeness[1000][1000];          // how close is a student to each other
    struct factor point[1000];          // close point of a student
    int min;                            // minimum closeness of two students            
    int max;                            // maximum closeness of two students

    // INPUT
    scanf("%d %d", &students, &powered);

    for (i = 0; i < students; i++) {
        scanf("%d %d", &point[i].x, &point[i].y);    
    }

    // PROCESS
    for (i = 0; i < students; i++) {
        for (j = i+1; j < students; j++) {
            closeness[i][j] = pow(abs(point[j].x - point[i].x), powered) + pow(abs(point[j].y - point[i].y), powered);
            if (i == 0 && j == 1) {
                min = closeness[i][j];
                max = closeness[i][j];
            }

            if (closeness[i][j] < min) {
                min = closeness[i][j];
            }

            if (closeness[i][j] > max) {
                max = closeness[i][j];
            }
        }
    }

    // OUTPUT
    printf("%d %d\n", min, max);

    return 0;
}