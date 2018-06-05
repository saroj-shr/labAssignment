#include<stdio.h>
#include<stdlib.h>

void main(){
    static int n;

    scanf("%d", &n);

    static int *p,i, temp,j ;
    p = (int *) calloc(sizeof(int), n);

    printf("Enter n \n");
    for(; i< n; i++){
        scanf("%d", p + i);
    }

    //sorting
    for(i = 0; i< n ;i++){
        for(j = i; j < n; j++ ){
            if(*(p  + i) > *(p +j )){
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;                    
            }
        }
        
    }

    printf("sorting\n\n");
    for(i = 0;i < n; i++){
        printf("%d\n", *(p + i));
    }

    free(p);
}