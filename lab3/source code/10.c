/*
  Author: Saroj D Shrestha
  Date: Jan 6 2018
  Objective: printing 10th term of the following series
    1 5 9 13
*/

#include<stdio.h>

void main(){
  printf("Print the following series upto 10th position\n");

  int j = 1;
  for (int i = 0; i < 10; i++) {
    printf("%d ", j);
    j += 4;
  }
  printf("\n");

}
