/*
JTSK-320111
a6 p7.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int rec(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return rec(b,a%b);
    }
}
int main()
{
    int x,y,s;
    scanf("%d %d", &x, &y);
    s=rec(x,y);
    printf("The GCD is: %d",s);
    return 0;
}
