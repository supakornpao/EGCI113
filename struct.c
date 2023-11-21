#include <stdio.h>
#include <stdlib.h>


 struct student{
    char name[20];//string
    double score;
    char grade;
 };

int getstudent(struct student[]);
void studentsgrade(struct student[],int);
void showstudent(struct student[],int);
void highestscore(struct student[],int);

int main()
{

    int i,size;
    struct student cst[size];
    double big;

    size=getstudent(cst);
    studentsgrade(cst,size);
    showstudent(cst,size);
    highestscore(cst,size);


    return 0;
}

int getstudent(struct student cst[]){
    int i,size;
    printf("How many students?: ");
    scanf("%d", &size);
    for(i=0;i<size;i++){
        printf("Input name %d: ",i+1);
        scanf("%s",cst[i].name);
        printf("Score: ");
        scanf("%lf",&cst[i].score);
    }
    return size;
}
void studentsgrade(struct student cst[],int size){
    int i;
    for(i=0;i<size;i++){
        if(cst[i].score>=80) cst[i].grade='A';
        else if(cst[i].score>=70) cst[i].grade='B';
        else if(cst[i].score>=60) cst[i].grade='C';
        else cst[i].grade='F';
    }
}
void showstudent(struct student cst[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%s got the score of %.2lf, which is grade %c", cst[i].name, cst[i].score, cst[i].grade);
        printf("\n");
    }
}

void highestscore(struct student cst[],int size){
    int i,max;
    double biggest;
    for(i=0;i<size;i++){
        biggest=cst[0].score;
        if(cst[i].score>biggest){
            biggest=cst[i].score;
            max=i;
        }
        else max=i;
    }
    printf("%s got the highest score ,which is %.2lf", cst[max].name, biggest);
}
