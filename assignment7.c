#include <stdio.h>
#include <stdlib.h>

void print_menu();
long fact(int);
int nCr(int,int);
int sum(int);
int main(int argc, const char * argv[])
{
    int menu;
    int n,r;
    do{
        print_menu();
        scanf("%d",&menu);
        if(menu<4){
            printf("Input your number(n): ");
            scanf("%d", &n);
        }
        switch (menu){
            case 1: printf("Your factorial (n!) is %1d",fact(n));
                    break;
            case 2: printf("Input your \'r\'");
                    scanf("%d",&r);
                    printf("Your %dC%d is %d",n,r,nCr(n,r));
                    break;
            case 3: printf("Your summation is %d", sum(n));
                    break;
            default: break;
        }
    }while(menu<4);
    return 0;
}
void print_menu(int a){
    printf("\n************************");
    printf("\nWhat do you want to do?");
    printf("\n1.Find Factorial");
    printf("\n2.Find Combinatorial number");
    printf("\n3.Find summation");
    printf("\n4.Exit the program");
    printf("\nYour choice: ");
}
long fact(int x){
    long fac;
    int i;
    fac=1;
    for(i=1;i<=x;i++){
        fac*=i;
    }
    return fac;
}
int nCr(int n, int r){
    int x;
    x=fact(n)/(fact(r)*fact(n-r));
    return x;
}
int sum(int x){
    int sum=0;
    for(;x>0;x--){
        sum+=x;
    }
    return sum;
}
