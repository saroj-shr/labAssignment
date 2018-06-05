//largest and smallest with array

#include<stdio.h>

void main(){
    //declaration
    static int array[100], n;
    
    //reading input
    printf("Enter n below 100");
    scanf("%d",&n);

    printf("Enter the elements");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);        
    }

    //parsing thought the array
    int largest = array[0], smallest = array[n -1], temp;

    for(int i = 0; i < n; i++){
        if(largest < array[i])
            largest = array[i];
        else if(smallest > array[i])
            smallest = array[i];        
    }

    //printing the largest and smallest values

    printf("largest : %d\n smallest: %d", largest, smallest);
        
}