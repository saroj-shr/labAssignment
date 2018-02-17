/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-02-12T19:27:28+05:45
 * @Filename: 1.c
 * @Objective: factorial with function
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-17T19:36:04+05:45
 */

#include<stdio.h>

long fact(int);

void main(){
    static int input;

    printf("Enter input Factorial\n");
    scanf("%d", &input);

    printf("The Factorial is %ld\n", fact(input));

}

long fact(int input){        
    if(input == 0){
        return 1;
    }else{
        return (input * fact(input - 1));
    }    
}