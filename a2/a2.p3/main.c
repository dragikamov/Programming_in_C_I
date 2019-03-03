/*JTSK-320111
problem 2.2.3
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[200];
    int h,m,s,sum;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d %d %d", &h, &m, &s);
    sum=(h*360)+(m*60)+s;
    printf("%d", sum);
    return 0;
}
