/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 20:41:13
    File Name: 4.c
    Objective: find the smallest element in an array using pointer
*/

#include<stdio.h>
#include<stdlib.h>

void input(int *, int);
int smallest(int *, int);

void main(){
    static int array[5], *p = array;
    printf("Enter element upto 5 elements\n");
    input(p, 5);

    printf("Smallest in the array: %d", smallest(p, 5));        
}

void input(int *p, int n){
    for(size_t i = 0; i < n; i++){
        scanf("%d", p + i);
    }
}

int smallest(int *p, int n){
    int number = *p;

    for(size_t i = 0; i < n ; i++){
        if( number > *(p + i)){
            number = *(p + i);
        }
    }
    return number;
}
