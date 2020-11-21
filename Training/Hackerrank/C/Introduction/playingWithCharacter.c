#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c, s[100], scn[100];

    scanf("%c\n%s\n%[^\n]%*c", &c, s, scn);

    printf("%c\n%s\n%s\n", c, s, scn);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}