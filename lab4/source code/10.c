/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-27T18:15:07+05:45
 * @Filename: 10.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-02-10T14:53:42+05:45
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
  char string1[20] = "Hello ", string2[20] = "World", word1[40] = "Hello World", word2[40] =" From C programming.";
  system("clear");

  //strcat
  printf("Appending two String\nString1 = %s\nString2 = %s\n",string1,string2);
  strcat(string1, string2);
  printf("%s\n", string1 );

  //strncat
  printf("\n\n");
  char sentence1[40] = "Sujata, being a good girl she ";
  char sentence2[40] = "succeed to get approval on the deadline.";
  printf("Appending two sting with strncat\nBefore\nsentence1:%s\nsentence2 :%s\n",sentence1, sentence2);
  strncat(sentence1, sentence2, 8);
  printf("After\nsentence1:%s\nsentence2 :%s\n",sentence1, sentence2);


  //strncat
  printf("\n\n");
  printf("Appanding Two words\nBefore\nword1: %s\nword2: %s\n", word1, word2);
  strncat(word1, word2, 30);
  printf("After\nWord1 = %s\nword2 = %s",word1, word2 );

  //strcmp
  printf("\n\n");
  printf("Comparing Two strings\nString1 = %s\nString2 = %s\n",string1,string2);
  if (strcmp(string1, string2) != 0) {
    printf("Two string aren't equal\n");
  }else{
    printf("They are equal\n");
  }

  //strncmp
  printf("\n\n");
  printf("Comparing Two words\nword1: %s\nword2: %s\n", word1, word2);
  if(strncmp(word1, word2, 30) != 0){
    printf("Two WOrds aren't equal\n");
  }else{
    printf("They are equal\n");
  }

  //strcpy
  printf("\n\n");
  printf("Copying Two strings\nBefore copying \nString1 = %s\nString2 = %s\n",string1,string2);
  strcpy(string2, string1);
  printf("After Copying \nString1 = %s\nString2 = %s\n",string1,string2);

  //strlen
  printf("\n\n");
  printf("Finding Length of strings\nString1 = %s : %ld\nString2 = %s : %ld\n",string1,strlen(string1),string2,strlen(string2));


  //strcmpi
  // printf("\n\n");
  // printf("Comparing Two strings with strcmpi\n");
  // printf("String1 : %s With %s\t Result: %d\n",string1, "HELLO WOrld", strcmpi(string1, "HELLO WOrld"));
  //The outpu should show 0

  //strupr
  // printf("\n\n");
  // printf("Converting To upper case\nBefore\nString1 = %s\nString2 = %s\n",string1,string2);
  // strcpy(string1, strupr(string1));
  // strcpy(string2, strupr(string2) );
  // printf("After\nString1 = %s\nString2 = %s\n",string1,string2);

  //strupr
  // printf("\n\n");
  // printf("Converting To Lower case\nBefore\nString1 = %s\nString2 = %s\n",string1,string2);
  // strcpy(string1, strlwr(string1));
  // strcpy(string2, strlwr(string2) );
  // printf("After\nString1 = %s\nString2 = %s\n",string1,string2);

  //strrev
  // printf("\n\n");
  // printf("Reversing  strings\nBefore Reversing \nString1 = %s\n",string1);
  // printf("After Reversing \nString1 = %s\n",strrev(string1));

}
