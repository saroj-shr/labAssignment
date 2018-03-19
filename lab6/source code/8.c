/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 21:15:49
    File Name: 8.c
    Objective: appending two string 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(char *);
void appending(char *, char *);
void output(char *);

void main(){
    static char string1[100], string2[50], *p1 = string1, *p2 = string2;
    printf("Enter two strings less then 50 chars\n");
    input(p1); input(p2);    

    printf("Appending give strings\n\n");
    appending(p1, p2);

    printf("the output of the first string\n");
    output(p1);    
}

void input(char *p){
    fgets(p, 50, stdin);
}

void appending(char *p1, char *p2){
    int len1 = strlen(p1), len2 = strlen(p2);    
    for(size_t i = 0 ; i < len2; i++){
        p1[len1 - 1 + i] = (p2[i]);
    }
}

void output(char *p){
    fputs(p, stdout);
}


