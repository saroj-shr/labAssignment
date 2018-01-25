/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 17.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-24T23:10:54+05:45
 * @Objective: String Palindrome  
 */

#include<stdio.h>

void main(){

  char givenString[50];
  int i = 0, len = -1, flag = 0;

  printf("Enter a string less then 50 Characters\n");
  fgets(givenString, 50, stdin);

  //finding the length of the string
  while (1) {
    if (givenString[i] != '\0') {
      len++;
      i++;
    } else {
      break;
    }
  }
  char tempString[len];

  //maping the Characters
  for(i = 0; i < len; i++){
    tempString[i] = givenString[(len - 1) - i];
  }

  //checking if Characters matches or not
  for (i = 0; i < len; i++) {
    if (givenString[i] != tempString[i]) {
      flag = 1;
      break;
    }
  }

  if (flag != 0) {
    printf("The given string is not Palindrome\n" );
  }else{
    printf("The given string is Palindrome\n");
  }

}
