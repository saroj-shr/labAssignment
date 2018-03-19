/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 21:15:49
    File Name: 3.c
    Objective: calculate the factorial and squre of the given number using pointer
*/
#include<stdio.h>
#include<stdlib.h>

void calculate(int ,int *, int *);
void main(){
    static int n, fact, pow, *p1 = &fact, *p2 = &pow;
    fact = 1;
    printf("Enter two numbers\n");
    scanf("%d", &n);

    calculate(n, p1, p2);
    
    printf("factorial: %d, square : %d\n", *p1, *p2);
}

void calculate(int n, int *p1, int *p2){
    static int i;
    for(i = 1; i <= n; i++){
        *p1 *= i;
    }
    *p2 = n * n;
}