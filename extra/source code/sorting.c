/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-25T22:20:38+05:45
 * @Filename: acsdec.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-25T22:52:34+05:45
 */

#include<stdio.h>

void main(){
  int n = 0;
  printf("Enter n'th term\n");
  scanf("%d",&n);

  int givenInput[n], i, j, temp;

  printf("Enter number up to %d digits\n", n );
  for(i = 0; i < n; i++){
    scanf("%d", &givenInput[i]);
  }

  //ascending order
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(givenInput[i] < givenInput[j]){
        temp = givenInput[i];
        givenInput[i] = givenInput[j];
        givenInput[j] = temp;
      }
    }
  }

  //printing the array
  printf("Sorting\n");
  printf("Ascending order \tDescending order\n" );
  for (i = 0; i < n; i++) {
    printf("%d\t\t\t%d\n",givenInput[i], givenInput[n-1-i]);
  }

}
