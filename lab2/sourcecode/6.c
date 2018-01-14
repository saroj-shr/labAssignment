/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: To illustrate the modulus operator
*/

#include<stdio.h>

void main() {
  int input;

  printf("Enter number:\n");
  scanf("%d", &input);

  (input % 2 == 0)? printf("Even\n"): printf("odd\n");
  
}
