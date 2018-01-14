/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T20:58:27+05:45
 * @Filename: 3.c
 * @Last modified by:   Saroj Dhwaz Shrestha
 * @Last modified time: 2018-01-14T21:19:03+05:45
 */



#include<stdio.h>

void main(){
  int option = 0;

  printf("Enter number to find month\n");

  while(1){
    scanf("%d", &option);

    switch(option){
      case 1:
        printf("Jan\n");
        break;
      case 2:
        printf("Feb\n");
        break;
      case 3:
        printf("March\n");
        break;
      case 4:
        printf("April\n");
        break;
      case 5:
        printf("May\n");
        break;
      case 6:
        printf("June\n");
        break;
      case 7:
        printf("Jully\n");
        break;
      case 8:
        printf("Aug\n");
        break;
      case 9:
        printf("Sep\n");
        break;
      case 10:
        printf("Oct\n");
        break;
      case 11:
        printf("Nov\n");
        break;
      case 12:
        printf("Dec\n");
        break;
      default:
        printf("Wrong Input! Try again!\n");
    }
  }

}
