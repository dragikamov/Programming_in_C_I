/*JTSK-320111
problem 2.2.4
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius, fahrenheit;
    char line[200];
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%lf", &celsius);
    fahrenheit=(((9*celsius)/5)+32);
    printf("%.2lf", fahrenheit);
    return 0;
}
