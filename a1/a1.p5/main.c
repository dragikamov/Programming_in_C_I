/*JTSK-320111
problem 1.1.5
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=478,i=0;
    for(i=0;i<9;i++)
    {
        printf("%d ",a);
    }
    printf("\n");
    float b=-29.7949954;
    for(i=0;i<11;i++)
    {
        printf("%.3f ", b);
    }
    char c='j';
    printf("\n%c\n", c);
    double d=946.3969843;
    printf("%.5f", d);
    return 0;
}
