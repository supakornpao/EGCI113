#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter coefficient: ");
    scanf("%d,%d,%d",&a,&b,&c);
    puts("Roots of the equation: ");

    switch (a){
        case 0: break;
        case 1: printf("x^2"); break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    if (b>0) printf("+");

    switch (b){
        case 0: break;
        case 1: printf("x"); break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    if (c>0) printf("+");

    switch (c){
        case 0: break;
        default: printf("%d",c);
    }

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
