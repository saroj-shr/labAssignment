/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T20:58:27+05:45
 * @Filename: 4.c
 * @Last modified by:   Saroj Dhwaz Shrestha
 * @Last modified time: 2018-01-14T21:19:07+05:45
 */



#include<stdio.h>

void main(){

  printf("Enter R G B \n");

  switch (getchar()) {
    case 'r':
      printf("RED\n");
      break;

    case 'R':
      printf("RED\n");
      break;

    case 'g':
      printf("GREEN\n");
      break;

    case 'G':
      printf("GREEN\n");
      break;

    case 'B':
      printf("BLUE\n");
      break;

    case 'b':
      printf("BLUE\n");
      break;

    default:
      printf("BLACK\n");

  }

}
