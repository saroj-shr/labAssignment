/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-27T18:15:07+05:45
 * @Filename: 6.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-11T21:18:41+05:45
 */

#include<stdio.h>
#include<stdlib.h>

void main(){
  system("clear");
  static int arrayA[3][5][5];

  //reading the value for arrayA and arrayB
  for (size_t i = 0; i < 2; i++) {
    printf("Reading into Values for %ld array\n",i + 1);
    for (size_t j = 0; j < 5; j++) {
      for (size_t k = 0; k < 5; k++) {
        printf("ArrayA:[%ld][%ld]",j,k);
        scanf("%d",&arrayA[i][j][k]);
      }
    }
    system("clear");
  }

  //adding two matrix
  for (size_t j = 0; j < 5; j++) {
    for (size_t k = 0; k < 5; k++) {
      arrayA[2][j][k] = arrayA[0][j][k] + arrayA[1][j][k];
    }
  }

  //printing all the arrays
  system("clear");
  for (size_t i = 0; i < 3; i++) {
    printf("%ld array\n",i + 1);
    for (size_t j = 0; j < 5; j++) {
      for (size_t k = 0; k < 5; k++) {
        printf("%d\t",arrayA[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
}
