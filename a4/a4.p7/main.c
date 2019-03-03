/*
JTSK-320111
a4 p7.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
double sum(double a, double b)
{
    return a+b;
}
void sumbyref(double a, double b, double *s)
{
    *s=a+b;
}
void swapbyref(double *a, double *b)
{
    double x;
    x=*a;
    *a=*b;
    *b=x;
}
int main()
{
    double x,y,ssum,s;
    scanf("%lf %lf", &x, &y);
    ssum=sum(x,y);
    printf("%lf\n", ssum);
    sumbyref(x,y,&s);
    printf("%lf\n",s);
    swapbyref(&x,&y);
    printf("After swap: %lf %lf",x,y);
    return 0;
}
