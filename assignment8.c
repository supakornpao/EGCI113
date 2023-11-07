#include <stdio.h>
#include <stdlib.h>
#define size 10

int main()
{
    int i;
    int x[size]={};

    for(i=0;i<size;i++){
        printf("Input score in [%d]: ",i+1);
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

    for(i=0;i<size;i++){
        if(x[i]==big) printf("\n%d has the maximum score",i+1);
        if(x[i]==small) printf("\n%d has the minimum score",i+1);
    }

    int sum=0;
    float avg;
    for(i=0;i<size;i++){
        sum+=x[i];
    }
    avg=(float)sum/(float)size;
    printf("\nAverage score is: %.2f", avg);

    for(i=0;i<size;i++){
        if(x[i]>avg){
            if(x[i]-avg>avg*0.2)
                printf("\nStudent [%d] got A", i+1);
            else printf("\nStudent [%d] got C",i+1);
        }
        else{
            if(avg-x[i]>avg*0.2)
                printf("\nStudent [%d] got F",i+1);
            else printf("\nStudent [%d] got C",i+1);
        }
    }

    return 0;
}
