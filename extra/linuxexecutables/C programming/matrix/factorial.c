#include<stdio.h>

float fact(float);
float power(float,float);

void main(){
    static float n;
    int i;
    float static result;
    scanf("%f", &n);

    for(i = 0; i< n; i++){
        if(i % 2 != 0){
            result = power(-1, i + 1)*(power(n, i)) / (fact(i)) ; 
        }
    }

    printf("%f", result);    

}

float fact(float i){
    if( i < 1){
        return 1;
    }else{
        return i * fact(i - 1);
    }
}

float power(float p, float i){
    if(i < 1){
        return 1;
    }else{
        return p * power(p, i - 1);
    }

}