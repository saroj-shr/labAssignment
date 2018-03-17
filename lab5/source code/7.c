/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-03-08
 * @Filename: 7.c
 * @Objective: number of upercase, lowercase, and other char by the user
 * @Last modified by:   saroj
  */

#include<stdio.h>
#include<stdlib.h>

void input(char [], int);
void processing(char [], int ,int *);
void output(char []);

void main(){
    char text[100], count[3];

    printf("Enter a word\n");
    input(text, 100);

    processing(text, 100, &count);

    output(text);

}

void input(char text[], int n){
    fgets(text, n, stdin);
}

void processing(char text[], int n , int *count){
    static int i, upercase, lowercase, othercase;
    for(; text[i] != '\n'; i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            
        }else if(text[i] >= 'a' && text[i] <= 'z'){
            
        }
    }    
}

void output(char text[])
{
    fputs(text,stdout);
}
