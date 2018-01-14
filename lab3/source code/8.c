/*
  Author: Saroj D Shrestha
  Date: Jan 5 2018
  Objective: finding the sum of all the number which are divisible by 7 and is between 100 and 200
*/

#include<stdio.h>

void main(){
  int sum = 0;

  for (int i = 100; i <= 200; i++) {
    if (i % 7 == 0) {
      sum += i;
    }
  }

  printf("The sum is : %d\n", sum );
}
