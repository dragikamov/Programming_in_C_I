/*
JTSK-320111
a4 p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
double convert(int mm)
{
    double m;
    m=mm/1000;
    return m;
}
int main()
{
    int inputmm;
    double exportm;
    scanf("%d", &inputmm);
    exportm=convert(inputmm);
    printf("%.2f", exportm);
    return 0;
}
