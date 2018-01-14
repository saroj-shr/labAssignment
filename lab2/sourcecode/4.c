/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: To greates number using conditional operator
*/

#include<stdio.h>

void main() {
  int input_1, input_2;

  printf("Enter two numbers\n");
  scanf("%d%d", &input_1, &input_2);

  printf("Maximum number: %d",(input_1 > input_2)? input_1: input_2);
}
