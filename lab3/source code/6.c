/*
  Author: Saroj D Shrestha
  Date: Jan 5 2018
  Objective: factorial of given number
*/

#include<stdio.h>

void main(){

  int i, number, factorial = 1;

  printf("Enter a number to Calculate the factorial\n");
  scanf("%d", &number);

  for (size_t i = 2; i <= number; i++) {
    factorial *= i;
  }

  printf("factorial: %d\n", factorial );

}
