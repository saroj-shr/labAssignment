//pal with out string function

#include<stdio.h>

void main(){
    static char str[50], org[50];
    static int i, isPal, len;

    printf("Enter the string \n");
    scanf("%s",org);    

    //getting length
    while(org[len] != '\0'){
        len++;
    }

    //get string the reverse
    for(; i < len; i++){        
        str[i] = org[len -1 - i];        
    }
    
    //checking if they are equal or not
    for(i = 0; i < len; i++){
        if(str[i] != org[i]){
            isPal = 1;
            break;
        }
    }

    if(isPal == 1){
        printf("\nits not pal\n");
    }else{
        printf("\nits pal\n");
    }    
}