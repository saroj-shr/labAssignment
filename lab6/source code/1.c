/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 21:15:49
    File Name: 1.c
    Objective: direct and indrect accessing
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    static int a ,b , *p1 = &a, *p2 = &b;
    a = 1; b = 2;
    //direct Access
    printf("a: %d\tb: %d\n",a ,b);
    printf("&a: %d\t&b: %d\n", &a , &b);

    //indirect Access
    printf("*p1 : %d\t *p2: %d\n", *p1, *p2);
    printf("p1 : %d\t p2: %d\n", p1, p2);
}