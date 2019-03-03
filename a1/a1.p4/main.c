/*JTSK-320111
problem 1.1.4
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=37, b=14;
    int result1=a+b, result2=a*b, result3=a-b;
    printf("The sum %d", result1);
    printf("\nThe product %d", result2);
    printf("\nThe difference %d", result3);
    double x=a, y=b, result4=x/y;
    printf("\nThe division %f", result4);
    int result5=a%b;
    printf("\nThe remainder %d", result5);
    printf("\nThe values of a and b are: %d and %d", a, b);
    return 0;
}
