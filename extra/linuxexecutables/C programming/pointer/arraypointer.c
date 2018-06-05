#include<stdio.h>

void array(int *, int);


void main(){
    static int a[] = {1, 2, 3};

    array(&a[0], 3);   
    
}

void array(int *givenArray, int n){
    while(n != 0){
        printf("%d", givenArray[n-1]);
        n--;
    }
}