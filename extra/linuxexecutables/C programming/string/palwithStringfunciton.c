//with function
#include<stdio.h>
#include<string.h>

void main(){
    static char string1[50], org[50];

    printf("Enter string\n");
    scanf("%s", string1);

    strcpy(org, string1);

    strcpy(string1, strrev(string1));

    if(strcmp(string1, org) == 0){
        printf("pal");
    }else{
        printf("not");
    }

    
}