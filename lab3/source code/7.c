/*
  Author: Saroj D Shrestha
  Date: Jan 5 2018
  Objective: finding Prime number between 1 to 500
*/

#include<stdio.h>

void main(){
  
  printf("Prime number between 1 to 500 \n");

  for (int i = 2; i <= 500; i++) {
    int flag = 0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
      printf("%d\n", i);
    }
  }
}
