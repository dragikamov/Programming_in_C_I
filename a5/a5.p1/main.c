/*
JTSK-320111
a5 p1.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int low,high,i;
    float cube,square;
    printf("Enter the lower value and the upper value:\n");
    scanf("%d %d",&low, &high);
    for(i=low;i<=high;i++)
    {
        float float_i=(float)i;
        cube=float_i*float_i*float_i;
        square=float_i*float_i;
        printf("%12.3lf%12.3lf%12.3lf\n",float_i,square,cube);
    }
    return 0;
}
