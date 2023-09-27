#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,min,max;
    printf("Enter A,B,C: ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a<=b&&a<=c)min=a;
    else if(b<=c)min=b;
    else min=c;

    if(a>=b&&a>=c)max=a;
    else if(b>=c)max=b;
    else max=c;

    printf("The minimum value is %d and the maximum value is %d",min,max);

    return 0;
}
