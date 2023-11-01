#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int i;
    int x[size]={};

    for(i=0;i<size;i++){
        printf("input number in [%d]: ",i+1);
        scanf("%d",&x[i]);
    }

    for(i=0;i<size;i++){
        printf("%-3d",x[i]);
    }

    int big=x[0];
    int small=x[0];
    for(i=0;i<size;i++){
        if (big<x[i])
            big=x[i];
        if (small>x[i])
            small=x[i];
    }

    printf("\nBiggest number is %d", big);
    printf("\nSmallest number is %d", small);

    return 0;
}
