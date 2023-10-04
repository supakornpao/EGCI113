#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter coefficient: ");
    scanf("%d,%d,%d",&a,&b,&c); //ax^2+bx+c
    puts("Roots of the equation: ");

    switch (a){
        case 0: break;
        case 1: printf("x^2"); break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    if (a!=0&&b>0) printf("+");

    switch (b){
        case 0: break;
        case 1: printf("x"); break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    if ((a!=0||b!=0)&&c>0) printf("+");
    if (c!=0) printf("%d=0\n",c);


    float x1,x2;

    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    if (pow(b,2)<4*a*c) //When the value in the square root is negative
        printf("\nNo real solution");

    else if (a==0){
            if (b!=0){ //if a=0 but b!=0, calculate it as a linear equation where x has 1 answer
                x1=-(float)c/(float)b;
                printf("\nx is equal to %.1f",x1);
            }
            else printf("No solution"); //if a=0 and b=0, no solution
    }
    else if (sqrt(pow(b,2)-4*a*c==0)) //The function has only 1 solution if b^2-4ac=0
        printf("\nOne real root is %.1f",x1);
    else
        printf("\nx1 = %.1f, x2 = %.1f",x1,x2);
    return 0;
}
