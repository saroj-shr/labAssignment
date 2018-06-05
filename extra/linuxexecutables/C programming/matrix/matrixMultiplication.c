#include<stdio.h>
#include<stdlib.h>

void main(){

    //declaring variables 
    static int matrixA[10][10], matrixB[10][10], matrixC[10][10];
    static int mA, nA, mB, nB, i, j, k, sum;

    //reading m and n
    printf("Enter m and n of matrix A\n");
    scanf("%d%d", &mA, &nA);

    printf("Enter m and n of matrix A\n");
    scanf("%d%d", &mB, &nB);

    if(nA != mB){
        printf("Matrix multipilcation is not posible!\n");
        exit(0);
    }else{
        printf("Matrix multiplication is posible\n");

        //reading input
        printf("Enter elements for matrix A\n");
        for(i = 0; i < mA; i++){
            for(j = 0; j < mB; j++){
                printf("\nElements: %d %d:", i+1, j+1);
                scanf("%d", &matrixA[i][j]);
            }
        }

        printf("Enter elements for matrix B\n");
        for(i = 0; i < mB; i++){
            for(j = 0; j < nB; j++){
                printf("\nElements: %d %d:", i+1, j+1);
                scanf("%d", &matrixB[i][j]);
            }
        }

        //multiplying two matrix
        for(i = 0;i < mA; i++){
            for( j = 0; j < nB; j++){
                for(k = 0; k < nA; k++){
                    sum += matrixA[i][k] * matrixB[k][j];
                }
                matrixC[i][j] = sum;
                sum = 0;
            }
        }
        
        //displaying the matrix 
        printf("Multiplied matrix is :\n");
        for(i = 0; i < mA; i++){
            for(j = 0; j < nB; j++){                
                printf("%d\t", matrixC[i][j]);
            }
            printf("\n");
        }        

    }

}