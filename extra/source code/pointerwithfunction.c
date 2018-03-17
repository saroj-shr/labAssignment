/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 18:21:31
    File Name: pointerwithfunction.c
    Objective: pointer with function
*/

#include<stdio.h>
#include<stdlib.h>

// for single input and single output 
// void input(int *);
// void output (int *);

// void main(){
//     static int a, *p = &a;
//     input(p);
//     output(p);
// }

// void input(int *p){
//     printf("Enter a number\n");
//     scanf("%d", p);
// }

// void output(int *p){
//     printf("Give number %d\n", *p);    
// }


void input(int *, int);
void output(int *, int);

void main(){
    static int a[5], *p = a;

    input(p, 5);
    // for(size_t i = 0; i < 5; i++){
    //     printf("%d", a[i]);
    // }
    output(p, 5);
}

void input(int *p, int n){
    printf("Enter elements\n");
    for(size_t i = 0; i < n; i++){
        scanf("%d",p+i);
    }
}

void output(int *p, int n){
    printf("given output\n");
    for(size_t i = 0; i < n; i++){
        // printf("%ld \t", i);
        printf("%d\n", *(p + i));
    }
}