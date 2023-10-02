#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    printf("\nEnter c: ");
    scanf("%d",&c);

    float x1,x2;

    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    if (pow(b,2)<4*a*c)
        printf("\nNo real solution");
    else if (a==0&&b==0)
        printf("\nThere are no value of x");
    else if (a==0){
        x1=-(float)c/(float)b;
        printf("\nx is equal to %.1f",x1);
    }
    else if (sqrt(pow(b,2)-4*a*c==0))
        printf("\nOne real root is %.1f",x1);
    else
        printf("\nx1 = %.1f, x2 = %.1f",x1,x2);
    return 0;
}
