/*
Program		: JumlahPecahan_Rey.c
Description	: Summing two fractions
Author		: Rey Rizki
Date		: 21 November 2019
Time        : 3:30 P.M. to 
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Finding the greatest common divisor of two numbers using Euclidean algorithm
long long int gcd(long long int x, long long int y) {    
    if (x == 0) {
        return y;
    } else {
        return gcd((y % x), x);
    }
}

// Finding the least common multiply of two numbers
long long int lcm(long long int number1, long long int number2) {
    return ((number1 * number2) / gcd(number1, number2));
}

int main() {
    // DECLARATION
    long long int a, c, e;                    // Denominator
    long long int b, d, f;                    // Nominator
  
    // INPUT
    // Inputting the first fraction 
    scanf("%lld %lld\n", &a, &b);
    
    // Inputting the second fraction
    scanf("%lld %lld", &c, &d);

    //printf("%d", gcd(b, d));
    //printf("%d", lcm(b,d));
    
    // PROCESS
    f = lcm(b, d);

    //printf("%d", f);
    
    e = (f / b) * a + (f / d) * c;

    // OUTPUT
    printf("%lld %lld\n", e/gcd(e, f), f/gcd(e, f));
    
    return 0;
}