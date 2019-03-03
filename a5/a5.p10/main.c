/*
JTSK-320111
a5 p10.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void sumdiffproddiv(double a, double b, double *sum, double *diff, double *prod, double *div)
{
    *sum=a+b;
    *diff=a-b;
    *prod=a*b;
    *div=a/b;
}
int main()
{
    double x,y,sum,diff,prod,div;
    scanf("%lf %lf",&x,&y);
    sumdiffproddiv(x,y, &sum, &diff, &prod, &div);
    printf("The sum: %lf\nThe difference: %lf\n",sum, diff);
    printf("The product: %lf\nThe division: %lf", prod, div);
    return 0;
}
