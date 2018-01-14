/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T21:21:57+05:45
 * @Filename: 1.c
 * @Last modified by:   Saroj Dhwaz Shrestha
 * @Last modified time: 2018-01-14T21:36:43+05:45
 8 @Objective: Leap year or not
 */

#include<stdio.h>

void main(){
  int year;

  printf("Enter a year\n");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if ( year % 100 == 0) {
      if ( year %400 == 0) {
        printf("IS a leap Year\n");
      } else {
        printf("Not a leap Year\n");
      }
    } else {
      printf("Is a leap Year!\n");
    }
  } else {
    printf("Not a leap Year!\n");
  }
}
