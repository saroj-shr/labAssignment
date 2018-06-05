#include<stdio.h>

void main(){

    static int array[5], *p = &array[0], i, sum;

    for(i = 0; i < 5; i++){
        scanf("%d", p +i);
    }
    

    for(i = 0; i< 5 ;i++){
        sum += *(p + i);
    }

    printf("%d", sum);

}