#include <stdio.h>
#include <stdlib.h>
#define max 10
#define maxrow 2

void question(int i){
    printf("Question %d: ",i);
    switch(i){
case 1:
    printf("While driving, the driver must have any documents used with the driving license.\n");
    printf("a. National Identification Card\n");
    printf("b. Copy of house registration\n");
    printf("c. Copy of car registration\n");
    printf("d. Social Security Card\n");
    break;
case 2:
    printf("The driver violates the road traffic law and receives a ticket from the traffic officer, how many days must he contact to pay the fine?\n");
    printf("a. 10 days\n");
    printf("b. 7 days\n");
    printf("c. 15 days\n");
    printf("d. 30 days\n");
    break;
case 3:
    printf("No honking is permitted in the vicinity of...\n");
    printf("a. Hospitals, courts, and schools\n");
    printf("b. Police station\n");
    printf("c. Shopping places\n");
    printf("d. Gas station\n");
    break;
case 4:
    printf("What characteristics must be used on a road vehicle?\n");
    printf("a. The car with the front lamp is not lit\n");
    printf("b. Vehicles that are noisy. 90 decibels A.\n");
    printf("c. Car with 55 percent black smoke\n");
    printf("d. Cars that have been registered and paid tax\n");
    break;
case 5:
    printf("When pedestrians are crossing the road near a pedestrian crossing, you should...\n");
    printf("a. Slow down, sound the horn, and then continue\n");
    printf("b. Sound the horn, and then continue\n");
    printf("c. Stop the vehicle and wait for pedestrians to cross the road before continuing\n");
    printf("d. None of these are correct\n");
    break;
case 6:
    printf("What is the legal age to ride a motorcycle without a gear?\n");
    printf("a. 20 years\n");
    printf("b. 24 years\n");
    printf("c. 16 years\n");
    printf("d. 18 years\n");
    break;
case 7:
    printf("Which side of the road should a vehicle's driver drive on?\n");
    printf("a. Left side\n");
    printf("b. Right side\n");
    printf("c. Middle\n");
    printf("d. All choices are correct\n");
    break;
case 8:
    printf("If you are on a one way\n");
    printf("a. Parking your vehicle is prohibited\n");
    printf("b. It is not advisable to drive in reverse gear\n");
    printf("c. Overtaking another vehicle is prohibited\n");
    printf("d. None of these are correct\n");
    break;
case 9:
    printf("What does a red traffic signal signify?\n");
    printf("a. Vehicle should be slowed down\n");
    printf("b. Drive with caution\n");
    printf("c. Stop the vehicle completely\n");
    printf("d. Drive faster\n");
    break;
case 10:
    printf("When should we use the fog lamps?\n");
    printf("a. Mist is present\n");
    printf("b. When the vehicle in front of you is not using dim lights\n");
    printf("c. During night\n");
    printf("d. When sunlight is too strong\n");
    break;

    }
    printf("Choose your answer for question %d: ",i);
}



void point(char ans[max],int i, char corans[max]){
    printf("%c is the correct answer\n",corans[i]);

if(ans[i]==corans[i]) {printf("You got +1 point\n");}
else{printf("Wrong, you got +0 point\n");}
}


struct driver{
    char fname[30],lname[30];
    int dob,mob,yob;
};

void driverinfo(){
        struct driver p1;
        printf("Congratulations! You passed the driver license exam.\n");
        printf("We will create a driver license card for you.\n");
        printf("Enter your first name : ");
        scanf("%s",p1.fname);
        printf("Enter your last name : ");
        scanf("%s",p1.lname);
        printf("Enter your date of birth (2 digits eg.04) : ");
        scanf("%d",&p1.dob);
        printf("Enter your month of birth (2 digits eg.02,12): ");
        scanf("%d",&p1.mob);
        printf("Enter your year of birth (eg.2004) : ");
        scanf("%d",&p1.yob);
        printf("_________________________________\n\n");
        printf("%15s %s\n",p1.fname,p1.lname);
        printf("%10d/%2d/%d\n\n",p1.dob,p1.mob,p1.yob);
        printf("_________________________________");
}


int main()
{
    int score=0,i,j;
    int eachscore[maxrow][max]={{1,2,3,4,5,6,7,8,9,10},{}};

    char ans[max];
    char corans[max]={'c','b','a','d','c','c','a','b','c','a'};
    printf("This is a driver license test.\nAnswer the correct choice to score a point.\n");
    printf("There are 10 questions, get more than 80 percent to pass.\n");
    for(i=1;i<=max;i++){
        question(i);
        scanf(" %c",&ans[i-1]);
        point(ans,i-1,corans);
        if(ans[i-1]==corans[i-1]){
            score+=1;
            eachscore[1][i-1]=1;
        }
        else eachscore[1][i-1]=0;
        printf("Current score: %d\n\n",score);
}

int ts=score;
struct driver p1;
printf("Your total score is %d\n",ts);

    if(ts>=8){
        driverinfo();
    }
    else{ printf("Sorry, you failed. Try again next time:( \n"); }

    printf("\n");
    printf("\nDetailed results(Correct answer:score=1,Wrong answer:score=0): ");
    for(i=0;i<maxrow;i++){
        if(i==0) printf("\n%9s","Question:");
        else if(i==1) {
            printf("----------------------------------------");
            printf("\n%9s","Score:");
        }
        for(j=0;j<max;j++){
            printf("%3d",eachscore[i][j]);
        }
        printf("\n");
    }
    return 0;
}

