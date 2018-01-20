/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 13.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-20T11:51:45+05:45
 */
#include<stdio.h>

void main(){
  double oldValue = 0, currentValue = 1, nextValue;
  for (int i = 0; i <= 100; i++) {
    if (i <= 1 ) {
      nextValue = i;
    } else {
      nextValue = oldValue + currentValue;
      oldValue = currentValue;
      currentValue = nextValue;
    }
    printf("%d:\t%0.0f\n",i,nextValue);
  }
}
