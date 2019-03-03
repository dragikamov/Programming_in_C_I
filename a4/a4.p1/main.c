/*
JTSK-320111
a4 p1.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>

int length(char str[])
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx)
    {
        /*Do nothing*/
    }
    return idx-1;
    ///the return idx-1 has to be out of the loop
    ///otherwise it is returning a value on the first step
    ///and in that way it gets out of the loop
    ///Also I added on the return "-1" because of the incorrectness by 1
    ///because of the 0
}
int main()
{
    char line[100];
    while(1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("Length (including newline) is: %d\n", length(line));
    }
    return 0;
}
