#include<stdio.h>
#include<stdlib.h>

struct DoA{
    int month;
    char day[10];
    int year;
};

struct employee{
    char name [50];
    char address [50];
    char post [50];
    float salary;
    struct DoA doa;
};

void main(){
    static int i,n;
    // struct employee list[50];
    printf("Enter n\n");
    scanf("%d", &n);

    struct employee *list = (struct employee*)calloc(sizeof(struct employee), n);

    printf("Enter info");
    for(i = 0; i < n; i++){
        printf("name\n");
        scanf("%s", list[i].name);

        printf("address\n");
        scanf("%s", list[i].address);

        printf("post\n");
        scanf("%s", list[i].post);

        printf("salary \n");
        scanf("%f", list[i].salary);

        printf("Enter DoA month day year");        
        scanf("%d", &list[i].doa.month);
        scanf("%s", list[i].doa.day);
        scanf("%d", &list[i].doa.year);
    }

    system("clear");

    for(i = 0; i < n; i++){
        printf("Name : %s", list[i].name);
        printf("Name : %s", list[i].address);
        printf("Name : %s", list[i].post);
        printf("Name : %f", list[i].salary);
        printf("Name : %s", list[i].doa.day);
        printf("Name : %d", list[i].doa.month);
        printf("Name : %d", list[i].doa.year);
    }
}