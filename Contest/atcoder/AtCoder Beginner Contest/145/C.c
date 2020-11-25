/*
Program		: averageLength.c
Description	: Calculating the average length of given points
Author		: Rey Rizki
Date		: 16 November 2019
Time        : 8:14 P.M. to 
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <math.h>

int factorial(int number) {
    if (number == 1) {
        return 1;
    } else {
        return factorial(number-1);
    }
}

struct Point {
    float x, y;                     // Coordinates
};

float length(struct Point number1, struct Point number2) {
    return sqrt(pow(number2.x - number1.x, 2) + pow(number2.y - number1.y, 2));
}

float permutation(int number) {
    return factorial(number)/factorial(number-2);
}

int main() {
    // DECLARATION
    int N;                          // The points
    struct Point coordinates[8];    // Coordinates
    int i, j;                       // for iteration, as usual
    float distance;                 // The distance between two points
    float average;                  // The average length

    // INPUT
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%f %f", &coordinates[i].x, &coordinates[i].y);
    }

    // PROCESS
    distance = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                distance += length(coordinates[j], coordinates[i]);
            }
        }
    }

    average = distance/permutation(N);

    // OUTPUT
    printf("%f", average);

    return 0;
}