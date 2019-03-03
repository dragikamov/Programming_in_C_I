/*
JTSK-320111
a4 p3.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
double to_kilogram(int pound, int ounce)
{
    double k;
    k=(pound*453.6)+(ounce*28.35);
    return k;
}
int main()
{
    int ppound,oounce;
    double kg;
    scanf("%d %d", &ppound, &oounce);
    kg=to_kilogram(ppound, oounce);
    printf("%.2f",kg);
    return 0;
}
