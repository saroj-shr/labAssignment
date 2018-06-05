#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[50];
    int rollID;
    int phone;
    char address[50];
    int sem;
};

void main(){
    struct student list[2];
    int i;

    for(i = 0; i < 2; i++){
        printf("Name: ");
        scanf("%s", list[i].name);        
        printf("\nRollNumber: ");
        scanf("%d", &list[i].rollID);              
        printf("\nphone: ");
        scanf("%d", &list[i].phone);                
        printf("\naddress");
        scanf("%s", list[i].address);                
        printf("\nsem");       
        scanf("%d", &list[i].sem);                
    }

    system("clear");
    for(i = 0; i<2;i++){
        printf("\nname:%s", list[i].name);
        printf("\nrollnumber:%d", list[i].rollID);
        printf("\nphone:%d", list[i].phone);
        printf("\naddress:%s", list[i].address);
        printf("\nsem:%d", list[i].sem);
    }
}