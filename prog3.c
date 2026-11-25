#include <stdio.h>

int main(){
	double x;
	
	scanf("%lf", &x);
	if (x == 0) {
		printf("The number you input is zero.");
	} else if (x > 0) {
		printf("The number you input is positive.");
	} else {
		printf("The number you input is negative.");
	}
	
	return 0;
}