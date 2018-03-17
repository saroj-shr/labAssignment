/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-03-03
 * @Filename: 3.c
 * @Objective: largest among three
 * @Last modified by:   saroj
  */


#include<stdio.h>

int largest(int, int, int);

void main(){
    static int a , b, c;

    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a, &b, &c);

    printf("Largest among three is: %d", largest(a,b,c));    
}

int largest(int a , int b, int c){
    if (a >b && b > c){
        return a;
    }else if(b > a && a > c){
        return b;
    }else{
        return c;
    }
}