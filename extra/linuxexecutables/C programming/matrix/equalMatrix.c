#include<stdio.h>

void main(){
    static int matrixA[10][10], matrixB[10][10], i, j, isEqual, m, n;
    
    printf("Enter m and n\n");
    scanf("%d%d", &m,&n);

    printf("%d", n);

    printf("Elements for matrix A\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("element %d %d:\t", i+1, j+1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("Elements for matrix B");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("element %d %d: \t", i+1, j+1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for( j = 0; j < n; j++){
            if(matrixA[i][j] != matrixB[i][j]){
                isEqual = 1; // matrix not equal
                break;
            }
        }
    }

    if(isEqual == 0){
        printf("Matrix is Equal\n");
    }else{
        printf("Matrix is not Equal\n");
    }
}