/*
JTSK-320111
a3 p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n%4==0 && n%7==0)
    {
        printf("The number is divisible by 4 and 7");
    }
    else
    {
        printf("The number is not divisible by both 4 and 7");
    }
    return 0;
}
