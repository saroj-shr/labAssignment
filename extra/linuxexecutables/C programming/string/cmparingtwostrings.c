//Comparing two string with out using any string function!!

#include<stdio.h>

void main(){
    static char string1[50], string2[50];
    static int i, len1, len2, isEqual;

    //reading inputs
    printf("Enter two strings for comparing\n");
    scanf("%s%s",string1, string2);    

    //geting length of two stirngs
    for(i = 0; string1[i] != '\0'; i++){
        len1++;
    }
    

    for(i = 0; string2[i] != '\0'; i++){
        len2++;
    }    

    //comparing two string
    //if isEqual is 0 the the string is same else not!!
    if(len1 == len2){
        for(i = 0; i < len1; i++){
            if(string1[i] != string2[i]){
                isEqual = 1;
                break;
            }
        }
    }else{
        isEqual = 1;
    }

    //displaying the result
    if(isEqual != 1){
        printf("Given string are same\n ");
    }else{
        printf("Given Strings are not Same\n");
    }
   
}