/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 21:15:49
    File Name: 2.c
    Objective: swap the content of two integer variable using call by reference
*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);

void main(){
    static int a, b, *p1 = &a, *p2 = &b;

    printf("Enter two values\n");
    scanf("%d%d", &a, &b);
    
    system("clear");
    printf("Before swap\n");
    printf("a: %d\t b: %d\n",a ,b);
    swap(&a, &b);
    printf("After swap\n");
    printf("a: %d\t b: %d\n", a, b);
}
void swap(int *a, int *b){
    static int t;
    t = *a;
    *a = *b;
    *b = t;
}