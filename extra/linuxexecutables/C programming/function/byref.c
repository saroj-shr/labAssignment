#include<stdio.h>

void calc(float *, float *, float *, float *);
float area(float *, float *);
float per(float *, float*);

void main(){
    static float l, b, *newArea1, *newPer1;
    
    printf("Enter l and b\n");
    scanf("%f%f", &l, &b);

    //normal way
    printf("area %f", area(&l, &b));
    printf("\nper %f\n", per(&l, &b));       

    //other way
    calc(&l,&b, newArea1, newPer1);
    printf("area %f",*newArea1);
    printf("\nper %f\n",*newPer1);       
}

float area(float *l, float *b){
    return (*b * *l);
}
float per(float *l, float *b){
    return (2 + (*b * *l));
}

void calc(float *l, float *b, float *area, float *per){
    *area = (*b * *l);
    *per = 2 + (*b + *l);
}
