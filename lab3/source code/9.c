/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T20:58:27+05:45
 * @Filename: 9.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-14T22:25:35+05:45
 * @Objective: adding first seven terms of the following series
 * 1/1!+2/2!+3/3!+...
 */

#include <stdio.h>

void main(){
  float sum = 0, factorial = 1;
  for (int i = 1; i < 11; i++) {
    for (int j = 1; j < i; j++) {
      factorial *= j;
    }
    sum += i/factorial;
    printf("Sum %f\n", sum);
    printf("factorial %.2f\n", factorial);
  }

  printf("\nSum: %f\n", sum);
}
