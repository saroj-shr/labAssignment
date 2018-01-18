/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 14.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-18T22:10:41+05:45
 */

#include<stdio.h>

void main(){
  char name[] = "Nepal College of Infomation Technology";
  int i = 0, count = 0;
  while (1) {
    if (name[i] != '\0') {
      count++;
      if (name[i] >= 65 && name[i] <= 90) {
        printf("%c\n",((int)name[i] - 65) + 97);
        name[i] = (char)(((int)name[i] - 65) + 97);
      }
      i++;
    }else{
      break;
    }
  }

  printf("Len : %d\n", count );
  printf("Output : %s\n", name );
}
