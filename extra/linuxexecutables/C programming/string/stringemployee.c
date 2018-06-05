#include<stdio.h>
#include<string.h>

void main(){
    static int n, i, j;
    char employee[25][50], temp[50];

    printf("Enter n\n");
    scanf("%d", &n);

    printf("Enter names of the employess\n");
    for(i = 0; i < n; i++){
        scanf("%s", employee[i]);
    }

    //sorting the employee
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(strcmp(employee[i], employee[j]) > 0){
            strcpy(temp,employee[i]);
            strcpy(employee[i], employee[j]);
            strcpy(employee[j], temp);
        }
        }
    }

    //printing the value
    printf("\nSorting the value\n");
    for(i = 0; i < n; i++){
        printf("%s\n", employee[i]);
    }
}