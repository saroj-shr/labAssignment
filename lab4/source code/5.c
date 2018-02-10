/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-27T18:15:07+05:45
 * @Filename: 5.c
 * @Objective: Ascending and escending order using selection sort
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-10T15:38:22+05:45
 */

#include<stdio.h>

void main(){
  static int array1[10], temp;

  //geting input from the user
  printf("For selection Sort\nEnter 10 inputs in integer datatype\n");
  for (size_t i = 0; i < 10; i++) {
    scanf("%d", &array1[i]);
  }

  //sorting
  for (size_t i = 0; i < 10; i++) {
    for (size_t j = 0; j < 10; j++) {
      if (array1[i] < array1[j]) {
        //swaping
        temp = array1[i];
        array1[i] = array1[j];
        array1[j] = temp;
      }
    }
  }

  //displaying the sorted
  printf("\nSorted data\nAccending Order\tDesending Order\n");
  for (size_t i = 0; i < 10; i++) {
    printf("\t%d\t%d\n",array1[i], array1[10 - 1 - i]);
  }
}
