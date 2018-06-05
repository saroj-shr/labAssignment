//matrix addation

#include<stdio.h>

void main(){
    
    // variable declartion
    static int matrixA[10][10], matrixB[10][10], matrixC[10][10], m, n, i, j;

    //geting input for the user
    printf("Enter row and col of the matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements for the matrix A\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\nelement %d %d\t:",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }

    printf("Enter elements for the matrix B\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\nelement %d %d\t:",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }

    //addition of two matrix
    for(i = 0 ; i < m; i++){
        for(j =0; j<n; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];        
        }
    }

    //printing the value
    printf("\noutput of the matrix is\n");
    for(i = 0; i < m; i++){
        for(j =0; j < n; j++){
            printf("%d\t", matrixC[i][j]);
        }
        printf("\n");
    }
}