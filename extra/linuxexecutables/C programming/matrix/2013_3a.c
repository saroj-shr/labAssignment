//matrix with prime or not 
#include<stdio.h>

int check(int);

void main(){
    static int matrix[100], i, n, sum;

    printf("Enter n less then 100 \n");
    scanf("%d",&n);

    printf("Enter elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &matrix[i]);
    }

    for(i=0; i<n; i++){
        if(check(matrix[i]) == 0 ){
            sum += matrix[i];
        }
    }

    printf("Sum = %d", sum); 

}

int check (int var){
    if(var == 2){
        return 0;
    }
    
    for(int j = 2; j < var; j++){
        if(var % j != 0){
            return 0;        
        }else{
            return 1;
        }
    }
}