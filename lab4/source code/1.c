/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-27T18:15:07+05:45
 * @Filename: 1.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-10T16:01:49+05:45
 * @Lab:4 - 1
 * @min, max avg of n number of ages
 */

#include<stdio.h>
#include<stdlib.h>

void main(){
  int n = 0, avg = 0;

  printf("Enter n number of ages?\n");
  scanf("%d", &n);

  int ages[n];
  printf("Enter %d numbers of ages\n",n);
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &ages[i]);
  }

  int max = ages[0],  min = ages[0];
  for (size_t i = 0; i < n; i++) {
    if (ages[i] > max) {
      max = ages[i];
    }

    if (ages[i] < min) {
      min = ages [i];
    }

    avg += ages[i];
  }

  system("clear");
  printf("Max: %d\nMin: %d\nAvg: %d\n",max, min, avg/n);
}
