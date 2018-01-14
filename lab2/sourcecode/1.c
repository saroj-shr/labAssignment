/*
	Author: Saroj Dhwaz Shrestha
	Roll Number: 171239
	Date: Dec 18 2017
	Objective: familiarization with ++ -- 
*/

#include<stdio.h>

void main(){

	int A = 10, B =5;
	
	A = ++A + ++A;
	B = A-- - --B;
	printf("A: %d\nB:%d",A,B);
}
