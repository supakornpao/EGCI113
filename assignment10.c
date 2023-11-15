#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[3][30];

    for(i=0;i<3;i++){
        printf("Input str[%d]:",i);
        gets(str[i]);
    }

    char first[30],last[30];

    strcpy(first,str[0]);
    for(i=0;i<3;i++){
        if(strcmp(first,str[i])>0)
            strcpy(first,str[i]);
    }

    printf("First string: %s",first);

    strcpy(last,str[0]);
    for(i=0;i<3;i++){
        if(strcmp(last,str[i])<0)
            strcpy(last,str[i]);
    }

    printf("\nLast string: %s",last);

    printf("\n%s\n",strcat(first,last));

    for(i=strlen(first)-1;i>=0;i--){
        switch(first[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': printf("%c",toupper(first[i])); break;
            default : printf("%c",first[i]);
        }
    }
}
