/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T21:18:27+05:45
 * @Filename: 2.c
 * @Last modified by:   Saroj Dhwaz Shrestha
 * @Last modified time: 2018-01-14T21:47:59+05:45
 * @Objective: To determine whether the character entered is capital, small letter, a digit or a specia symbol
 */

#include <stdio.h>

void main(){
  char input;

  printf("Enter any thing!\n");
  scanf("%c", &input);

  if (input >= 65 && input <= 90) {
    printf("Capital Letter\n");
  } else if (input >= 97 && input <= 122) {
    printf("Small Letter\n");
  }else if(input >= 48 &&  input <= 57){
    printf("A digit\n");
  }else if(input >= 0 && input <= 47 || input >= 48 && input <= 64 || input >=91 && input <= 96 || input >= 123 && input <= 127){
    printf("Special Symbols\n");
  }

}
