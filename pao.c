#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    printf("\nEnter c:");
    scanf("%d",&c);

    float x1,x2;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("\nx1=%.2f",x1);
    printf("\nx2=%.2f",x2);
    return 0;
}
