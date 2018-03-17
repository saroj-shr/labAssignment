/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-03-03
 * @Filename: 6.c
 * @Objective: number of vowels in text
 * @Last modified by:   saroj
  */

  #include<stdio.h>
  #include<stdlib.h>

  int vowels(char text[]);

  void main(){    
    char text[100];
    system("clear");
    
    printf("Enter a text\n");
    fgets(text,100, stdin);
    // fputs(text, stdout);

    printf("Number no vowels: %d\n", vowels(text));    
  }

  int vowels(char text[]){
    static int n, count;    
    for(; text[n] != '\n'; n++){      
      if(text[n] == 'a' || text[n] == 'e' || text[n] == 'i'|| text[n] == 'o' || text[n] == 'u'){
        count++;
      }
    }
    return count;
  }