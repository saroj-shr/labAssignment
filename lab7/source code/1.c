/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 17
    Date: 2018-19-03
    Objective: 
*/

#include<stdio.h>
#include<stdlib.h>

struct joiningDate{
    int date, month, year;
};

struct info{
    int id;
    char name[100];    
    float pay;
    struct joiningDate d;
};

void main(){
    static int i;
    struct info emp[5];

    //getting input
    for(i = 0; i < 5; i++){
        printf("Enter details for the: %d\n", i + 1);
        
        printf("Id : ");
        scanf("%d", &emp[i].id);
        
        printf("\npay : ");
        scanf("%f", &emp[i].pay);

        printf("\nName : ");
        scanf("%s", emp[i].name);
        // fgets(emp[i].name, 100, stdin);
        
        printf("Enter dd mm year");
        scanf("%d", &emp[i].d.date);
        scanf("%d", &emp[i].d.month);
        scanf("%d", &emp[i].d.year);
    }

    //displaying output
    for (i = 0; i < 5; i++){
        if(emp[i].pay >= 1000){
            printf("Details for the: %d\n", i + 1);

            printf("Id : %d", emp[i].id);

            printf("\npay : %f", emp[i].pay);

            printf("\nName : ");
            fputs(emp[i].name, stdout);

            printf("\nJoin date: %d-%d-%d", emp[i].d.date, emp[i].d.month, emp[i].d.year);       
            
        }
        
    }
}