/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:55:05+05:45
 * @Filename: 11.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-14T23:06:07+05:45
 */

#include <stdio.h>

void main(){
  int n, sum = 0;
  printf("Enter n'th term\n");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    // sum += (i % 2 != 0)? 0: n;
    if (i % 2 != 0) {
      sum += i;
    }
  }

  printf("Sum: %d\n", sum);
}
