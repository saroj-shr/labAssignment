#include<stdio.h>

int greatest(int [], int);


void main(){
    static int array[5],i ;

    printf("Enter the elements of the array\n");
    for(i = 0; i < 5; i++){
        scanf("%d",&array[i]);        
    }

    //passing array to the function 
    printf("greatest number :%d", greatest(array, 5));
}

int greatest(int array[], int n){
    int i, number = array[0];
    for(i = 0; i < n ;i++){
        if(array[i] > number){
            number = array[i];
        }
    }

    return number;
}