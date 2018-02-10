/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-02-05T22:25:32+05:45
 * @Filename: palindrome.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-05T22:58:44+05:45
 */

 #include <stdio.h>
 #include <string.h>

 void main(){

   char input[10];
   int l;

   printf("Enter a string\n");
   fgets(input,10, stdin);
   printf("%ld\n\n", strlen(input) );
   l = strlen(input);

   for (size_t i = 0; i < l/2; i++) {
     printf("i:%ld\nl: %d\ninput[i]:%c != input[len - 1 -i]: %c\n", i,l,input[i],input[(l - 1) -i] );

     if (input[i] != input[(l - 1)- i]) {
       printf("NOT\n\n");
       // break;
     }
     if( i == l/2 ){
       printf("YES");
     }


   }

 }
