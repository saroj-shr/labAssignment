/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 21.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-24T22:30:33+05:45
 * @Objective: TO print Pattern with loop
 */

#include<stdio.h>

void main(){
  char status[5];
  int i , j;
  //Pattern A

  // Pattern B
  for (i = 1; i <= 5; i++) {
    for (j = 0; j < i; j++) {
      printf("%d",i);
    }
    printf("\n");
  }
  printf("\n");

  // Pattern C
  for (i = 1; i <=5 ; i++) {
    for (j = 1; j <= 5; j++) {
      if (i == j) {
        printf("0");
        continue;
      }else{
        printf("%d", i);
      }
    }
    printf("\n");
  }

}
