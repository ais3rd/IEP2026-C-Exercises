/*
* Name				:  Reagan Yotta Suwito
* Student Number	: 5023251046
*/
#include <stdio.h>

int main(){
	int year;
	
	for (year = 1;year <= 2100;year++) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d\n", year);
		}}
		
return 0;	
}
	