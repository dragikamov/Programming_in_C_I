/*JTSK-320111
problem 2.2.5
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    char line[200];
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d", &val);
    printf("%d\n", val);
    int *ptr_val;
    ptr_val=&val;
    printf("%p\n", ptr_val);
    *ptr_val+=1;
    printf("%d %p", *ptr_val, ptr_val);
    return 0;
}
