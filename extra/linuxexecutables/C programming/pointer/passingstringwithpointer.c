#include<stdio.h>


void change(char *);

void main(){
    char string[100], *p = string;
    scanf("%s", string);
    
    
    change(p);
}

void change(char *p){
    printf("%s", p);

}