/*JTSK-320111
problem 1.1.3
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double result; /* The result of the division */
    int divisor = 22;
    result = 7.0 / divisor;
    printf("The result is %lf\n", result);
    return 0;
}
///it was missing "#"
///it has to be "7.0"
///and we have to use long float for the printf
