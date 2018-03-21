/*
    Author: Saroj Dhwaz Shrestha
    Roll Number: 171239
    Date: 2018-20-03 21:33:37
    File Name: 2.c
    Objective: reading info of 100 students using struct
*/

#include<stdio.h>
#include<stdlib.h>

struct dob{
    int dd, mm, yy;
};

struct info{
    int rollNo;
    char name[100];
    struct dob d;
    char faculty[20];  
};

void input(struct info *, int);
void output(struct info *, int);

void main(){
    static int n, i;

    printf("Enter numbers of input\n");
    // scanf("%d", &n);
    n = 3;

    struct info student[n], *studentPointer[n];

    for(; i < n; i++){
        studentPointer[n] = &student[n];
        input(studentPointer[i],i);
    }

    for(i = 0; i<n; i++){
        studentPointer[n] = &student[n];
        input(studentPointer[i], i);
    }    
}

void input(struct info *student, int n){
    printf("Enter for %d\nRoll number\n",n);
    scanf("%d", &student->rollNo);

    printf("name\n");
    scanf("%s", student->name);
    
    printf("Dob(dd mm yy)\n");
    scanf("%d%d%d", &student->d.dd, &student->d.mm, &student->d.yy);
    printf("Faculty\n");
    scanf("%s",student->faculty);      

}

void output(struct info *student, int n)
{
    printf("Enter for %d\nRoll number: %d\n", n, student->rollNo);
    
    printf("Name:");
    fputs(student->name, stdout);

    printf("\nDob: %d-%d-%d\n", student->d.dd, student->d.mm, student->d.yy);

    printf("\nFaculty%s\n", student->faculty);
}