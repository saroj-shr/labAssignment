#include<stdio.h>
#include<ctype.h>

void main(){

  char name;

  printf("Enter in a name\n");
  name = getchar();
  while (isalpha(name)) {
    printf("upper conversion %c\n", toupper(name) );
    break;
  }
}
