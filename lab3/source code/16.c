/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 16.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-20T11:26:39+05:45
 */

#include<stdio.h>

void main(){
  char givenString[] = "this is c programming";
  int len = 0, space = 1;

  for (int i = 0; givenString[i] != '\0'; i++) {
    len++;
    if (givenString[i] == ' ') {
      space++;
    }
  }

  printf("Length : %d\nSpace: %d",len, space);
}
