/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 19:40:00
    File Name: 7.c
    Objective: finding the length of the given number using pointer and function
*/

#include<stdio.h>
#include<stdlib.h>

void input(char *);
int len(char *);

void main(){
    static char string[100], *p = string;
    system("clear");
    
    printf("Enter a string less the 100 char\n");
    input(p);

    printf("Length of the String is: %d", len(p) - 1 );
}

void input(char *p){
    fgets(p, 100, stdin);
}

int len(char *p){
    static int count;
    for(size_t i = 0; *(p + i) != '\0'; i++){        
        count++;
    }
    return count;
}

