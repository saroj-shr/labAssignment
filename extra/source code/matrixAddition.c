/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-26T21:43:25+05:45
 * @Filename: matrix.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-26T22:51:19+05:45
 * @Objective: matrix addition with static declartion of matrix size
 */

#include<stdio.h>

void main(){
  int givenInputA[2][2], givenInputB[2][2];

  //geting input in matrix A and B
  printf("Enter for matrix A, size 2 by 2 \n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("A[%d][%d]:\t",i,j );
      scanf("%d", &givenInputA[i][j]);
    }
  }
  printf("Enter for matrix B, size 2 by 2\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("B[%d][%d]:\t",i,j );
      scanf("%d", &givenInputB[i][j]);
    }
  }

  //computing and printing
  printf("Print in matrix form\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d\t",givenInputA[i][j] + givenInputB[i][j]);
    }
    printf("\n");
  }

}
