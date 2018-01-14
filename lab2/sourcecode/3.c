/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: To illustrate the modulus operator
*/

#include<stdio.h>

void main(){
  int time_sec, time_hours, time_mins, time_input;

  printf("Enter time in seconds");
  scanf("%d",&time_input);

  time_hours = time_input % 600;

  time_mins = time_input / 60;

  printf("%d\n", time_hours);
  printf("%d\n", time_mins);
  printf("%d\n", time_input);
}
