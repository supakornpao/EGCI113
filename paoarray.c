#include <stdio.h>
#include <stdlib.h>
#define size 10

int minimum(int [], int);
int maximum(int [], int);

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

    int max=maximum(x,size);
    int min=minimum(x,size);

    for(i=0;i<size;i++){
        if(x[i]==max) printf("\n%d has the maximum score",i+1);
        if(x[i]==min) printf("\n%d has the minimum score",i+1);
    }


    int sum=0;
    float avg;
    for(i=0;i<size;i++){
        sum+=x[i];
    }
    avg=(float)sum/(float)size;
    printf("\nAverage score is: %.2f", avg);

    for(i=0;i<size;i++){
        if(x[i]>avg*1.2)
            printf("\nStudent [%d] got A", i+1);
        if(x[i]<avg*0.8)
            printf("\nStudent [%d] got F",i+1);
        else if (x[i]>=avg*0.8&&x[i]<=avg*1.2)
            printf("\nStudent [%d] got C",i+1);
    }

    return 0;
}

int minimum(int a[],int n){
    int min=a[0];
    int i=1;
    for(i=1;i<n;i++)
        if(min>a[i]) min=a[i];
    return min;
}
int maximum(int a[],int n){
    int max=a[0];
    int i;
    for(i=1;i<n;i++)
        if(max<a[i]) max=a[i];
    return max;
}
