/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: To illustrate the symbolice constants
*/

#include<stdio.h>

#define de_inches feet*12
#define de_meter total_inches*0.0254

void main() {
  float feet, inches, weight, total_inches;
  float total_meter, ratio;

  puts("Enter you height in feet and inches and weight in Kg");
  scanf("%f%f%f",&feet, &inches, &weight);

  total_inches = de_inches + inches;
  total_meter = de_meter;

  ratio = weight / (total_meter * total_meter);

  printf("Total Inches: %0.2f\nTotal meter: %0.2f\nRatio: %0.2f",total_inches, total_meter, ratio );
}
