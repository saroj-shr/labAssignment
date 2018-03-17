/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 20:16:53
    File Name: 5.c
    Objective: pass a pointer to array as an arg to a function then print the content of an array
*/

#include<stdio.h>
#include<stdlib.h>

void print(int *, int);

void main(){
    int array[4] = {1, 3, 5, 2}, *p = array;
    print(p , 4);      
}

void print(int *p, int n){
    for(size_t i = 0; i < n ; i++){
        printf("\n%d", *(p + i));
    }
}