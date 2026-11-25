/*
* Name 				: Reagan Yotta Suwito
* Student Number 	: 5023251046
* Exercise 5
*
*/
#include <stdio.h>

double ave(int x, int y){
	int v = (x + y)/2;
	
	return v;
}


int main(){
	int a, b;
	float c;
	
	printf("input two integer numbers:\n");
	scanf("%d %d", &a, &b);
	
	c=ave(a,b);
	
	printf("The average is = %f.\n", c);
	
	return 0;
}