/*
* Name 				: Reagan Yotta Suwito
* Student Number 	: 5023251046
* Exercise 6
*
*/

#include <stdio.h>

int main(){
	//define variables
	int i;
	float sum;
	float data[10];

	for (i=0;i<10;i++) {
		printf("Input number %d", i)
		scanf("%f", &data[i]); //read data from keyboard
		sum += data[i];
	}
	
	float max = data[0]; //possible max
	float min = data[0]; //possible min
	
	for (i=1;i<10;i++) { //roll from array 1 to 9
		if (data[i] > max) { //compare with possible max
			max = data[i];	//exchange var max with new possible max
		}	
		if (data[i] < min) { //compare with possible min
			min = data[i];	//exchange var min with new possible min
		}
	}
	
	float average = sum / 10.0; //count average
	
	//print value
	printf("Average = %f\n", average); 
	printf("Maximum = %f\n", max);
	printf("Minimum = %f\n", min);
	
	return 0; 	
}