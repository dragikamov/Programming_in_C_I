/*JTSK-320111
problem 2.2.2
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char line[200];
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d", &a);
    ///I get the integer
    printf("%d %o %x", a, a, a);
    ///d for decimal
    ///o for octal
    ///x for hexadecimal
    return 0;
}
