/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-03-03
 * @Filename: 5.c
 * @Objective: read positive number and print the prime numbers upto it
 * @Last modified by:   saroj
  */


#include<stdio.h>

void output(int);

void main(){
    
    static int input;

    printf("Enter positive number\n");
    scanf("%d", &input);

    if(input > 0){
        output(input);
    }else{
        printf("Invalid Input\n");        
    }    
}

void output(int input){
    static int flag; //if flag is high it not a prime number

    for(size_t i = 0; i <= input; i++){
        for (size_t j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;                
            }
        }

        (flag == 1) ? flag == 0 : printf("%ld\t", i);
    }


}

