/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: To find the real roots o a qyadratic equation
*/

#include<stdio.h>
#include<math.h>

void main(){
  float a, b, c, x1, x2, temp;

  printf("Enter a, b, c\n");
  scanf("%f %f %f",&a, &b, &c);
  temp = pow(b,2) - 4 *a *c;
  if (temp == 0) {
    printf("The roots are equal\n%f",(-b / (2 * a)));
  }else if(temp > 0){
    printf("The roots are real\n");
    x1 = (-b - sqrt(temp)) / ( 2 * a);
    x2 = (-b + sqrt(temp)) / (2 * a);
    printf("x1 = %f\nx2 = %f",x1, x2);
  }else
    printf("Roots are Imaginary!!");
}
