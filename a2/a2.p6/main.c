/*JTSK-320111
problem 2.2.6
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float *ptr1, *ptr2, *ptr3;
    char line[200];
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%f %f", &a, &b);
    ptr1=&a;
    ptr2=&a;
    ptr3=&b;
    printf("%p\n%p\n%p\n", ptr1, ptr2, ptr3);
    return 0;
}
