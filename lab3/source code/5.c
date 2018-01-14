/**
 * @Author: Saroj Dhwaz Shrestha
 * @Date:   2018-01-14T20:58:27+05:45
 * @Filename: 5.c
 * @Last modified by:   Saroj Dhwaz Shrestha
 * @Last modified time: 2018-01-14T21:19:11+05:45
 */



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// #include<ncurses.h>


void main() {

  int value1, value2;
  char option;

  printf("Enter two values\n" );
  scanf("%d%d",&value1,&value2 );


  while (1) {
    printf("\n**************\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Square\n");
    printf("6: Cube\n");
    printf("7: Exit\n");
    scanf("%c", &option);

    switch (option) {
      case '1':
        printf("Addition: %d\n", value1 + value2);
        break;

      case '2':
        printf( "Subtraction: %d\n", value1 - value2);
        break;

      case '3':
        printf("Multiplication: %d\n", value1 * value2);
        break;

      case '4':
        printf("Division: %f\n", (value1 * 1.0) / value2);
        break;

      case 5:
        printf("Square:\n value1: %f\n value2: %f", pow(value1, 2), pow(value2, 2) );
        break;

      case 6:
        printf("Cube: value1: %f\n value2: %f\n", pow(value1, 3), pow(value2, 3) );
        break;

      case '7':
        exit(0);
        break;

      default:
        printf("Wrong Input! Try again\n");
        break;
    }
  }

}
