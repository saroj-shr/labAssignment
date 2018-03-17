/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-17-03 15:48:53
    File Name: 6.c
    Objective: sorting the elements of an array using pointer and function
*/

#include<stdio.h>
#include<stdlib.h>

void input(int *, int);
void output(int *, int);
void swap (int *, int *);
void sort(int *, int);

void main(){
    static int array[100], *p = array, n;

    system("clear");
    
    // reading inputs
    printf("Enter n\n");
    scanf("%d", &n);

    printf("Enter elements\n");
    input(p,n);

    // swap the numbers
    sort(p, n);

    //displaying output
    printf("Data sorted in desecending order\n");
    output(p, n);

}

void input(int *p, int n){
    for(size_t i = 0; i < n; i++){
        scanf("%d", p + i);
    }
}

void output(int *p, int n){
    for(size_t i = 0; i < n; i++){
        printf("%d\n", *(p + i));
    }    
}

void swap(int *a, int *b){
    static int t;
    // printf("\n%d\n", *a);
    // printf("\n%d\n", *b);
    t = *a;
    *a = *b;
    *b = t;  
}

void sort(int *p, int n){
    for(size_t i = 0; i < n ; i++){
        for(size_t j = 0; j < n ; j++){
            if(*(p + i) > *(p + j)){
                swap ( p + i, p + j);
            }
        }
    }
}

