/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:16:03+05:45
 * @Filename: 12.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-14T23:05:00+05:45
 * @Objective: find the sum of series
 * 1/1+1/2+1/3+......
 */


#include <stdio.h>

void main(){
  float n, sum = 0;
  printf("Enter n'th term\n");
  scanf("%f", &n);

  for ( int i = 1; i <= n; i++) {
    sum += (1 * 1.0)/i;
    printf("%d\tSum: %f\n",i, sum);
  }

  printf("\nSum: %f\n", sum);
}
