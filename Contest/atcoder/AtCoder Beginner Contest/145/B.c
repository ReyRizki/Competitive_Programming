/*
Program		: echo.c
Description	: Checking echo of a string
Author		: Rey Rizki
Date		: 16 November 2019
Time        : 7:58 P.M. to 8:08 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // DECLARATION
    int length;                     // The length of the string
    char string[101];               // The string itself
    int i;                          // for iteration, as usual
    bool echo;                      // for the state

    // INPUT
    scanf("%d\n", &length);
    fgets(string, 101, stdin);

    // PROCESS
    echo = true;
    if (length % 2 == 0) {
        while (echo && i < length/2) {
            if (string[i] != string[i+(length/2)]) {
                echo = false;
            } else {
                i++;
            }
        }
    } else {
        echo = false;
    }

    // OUTPUT
    if (echo) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}