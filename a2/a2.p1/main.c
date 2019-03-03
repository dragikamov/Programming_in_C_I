/*JTSK-320111
problem 2.2.1
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    float one, two,sum,diff,sq;
    int dig1,dig2,sum2,pro2;
    double sum3,pro3;
    char line[200],line2[200],line3[200];
    char char1,char2,a,b;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%f %f", &one, &two);
    ///gets the two floats if they are
    ///written in one line
    sum=one+two;
    diff=one-two;
    sq=one*one;
    printf("%f\n%f\n", sum, diff);
    printf("%f\n", sq);
    fgets(line2, sizeof(line2),stdin);
    sscanf(line2, "%d %d", &dig1, &dig2);
    ///gets the two integers
    sum2=dig1+dig2;
    pro2=dig1*dig2;
    printf("%d \n%d\n", sum2, pro2);
    fgets(line3, sizeof(line3),stdin);
    sscanf(line3, "%c %c", &char1, &char2);
    ///gets the two chars
    sum3=char1+char2;
    pro3=char1*char2;
    a=sum3;
    b=pro3;
    ///with a and b I am representing
    ///the characters on those numbers
    printf("%lf\n%lf\n%c %c", sum3, pro3, a, b);
    return 0;
}
