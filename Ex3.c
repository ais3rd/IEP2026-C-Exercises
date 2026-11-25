/*
* Name				:  Reagan Yotta Suwito
* Student Number	: 5023251046
*/
#include <stdio.h>

int main() {
	int x, y;
	char tor;
	double ans;
	
	scanf("%d %c %d", &x, &tor, &y);
	switch (tor) {
		case '+':
			printf("%d %c %d = %lf\n", x, tor, y, (double)x + y);
			break;
		case '-':
			printf("%d %c %d = %lf\n", x, tor, y, (double)x - y);
			break;
		case '*':
			printf("%d %c %d = %lf\n", x, tor, y, (double)x * y);
			break;
		case '/':
			if (y == 0) {
				printf("Cannot divide by zero.\n");
			} else {
			printf("%d %c %d = %lf\n", x, tor, y, (double)x / y);
			}
			break;
		default:
            printf("Error: Invalid operator '%c'.\n", tor);
            break;
	}
	
	return 0;
}
