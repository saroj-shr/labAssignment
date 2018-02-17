/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-02-12T19:27:28+05:45
 * @Filename: 2.c
 * @Objective: power function
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-17T19:36:04+05:45
 */

#include<stdio.h>

double power(int, int);

void main(){
    static int b, p;

    printf("Enter base and power\n"); 
    scanf("%d%d", &b, &p);

    printf("Result: %0.3lf\n",power(b,p));
    
}

double power(int b, int p){    
    if(p == 0){
        return 1;
    }else{
        return (b * power(b, p - 1));
    }
}