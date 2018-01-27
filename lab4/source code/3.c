/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-27T18:15:07+05:45
 * @Filename: 3.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-27T18:46:43+05:45
 * @Lab 4 - 3: print in reverse order
 */

#include<stdio.h>

void main(){
  int input[10];
  printf("Enter 10 numbers\n");
  for (size_t i = 0; i < 10; i++) {
    scanf("%d", &input[i]);
  }

  printf("In reverse order\n");
  for (size_t i = 0; i < 10; i++) {
    printf("%d\n", input[10 - 1 - i]);
  }
}
