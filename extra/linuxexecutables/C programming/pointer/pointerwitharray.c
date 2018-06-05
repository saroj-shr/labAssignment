#include<stdio.h>

void swap(int *, int);

void main(){
    static int array[10], temp, *pointer = &array[0], i, j;

    printf("enter elements\n");
    for(i = 0;i < 10;i++){
        scanf("%d", &pointer[i]);
    }
    
    swap(&array[0], 10);
    printf("printing\n\n");
    for(i = 0 ;i <= 10; i++ ){
        printf("%d\n", pointer[10 - 1 - i]);
    }
}


void swap(int *pointer, int n){
    int i,j, temp;

    for(i = 0; i< 10; i++){
        for(j = i; j < 10 ; j++){
            if( *(pointer + i) < *(pointer +j) ){
                temp = *(pointer + i);
                *(pointer + i) = *(pointer +j);
                *(pointer + j) = temp;
            }
        }
    }
}