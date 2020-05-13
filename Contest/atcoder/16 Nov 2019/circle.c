/*
Program		: circle.c
Description	: Calculating the ratio of an area of a circle to another circle
Author		: Rey Rizki
Date		: 16 November 2019
Time        : 7:45 P.M. to 7:48 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // DECLARATION
    int r;                          // the radius of a cricle

    // INPUT
    scanf("%d", &r);

    // OUTPUT
    printf("%d\n", r * r);

    return 0;
}