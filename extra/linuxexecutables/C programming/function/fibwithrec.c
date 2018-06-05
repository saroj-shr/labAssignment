#include<stdio.h>

int fib(int);

void main(){
    static int n, i;

    printf("Enter n \n");
    scanf("%d",&n);

    //calc
    for(i = 0;i < n; i++){
        printf("\n%d", fib(i));
    }
}

int fib(int n){
    if(n < 2){
        return n;
    }else{
        return fib(n-1) + fib(n - 2);
    }
}