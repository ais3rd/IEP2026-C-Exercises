#include <stdio.h>

int main() {
	int p, q;
	float hasilBagi;
	
	printf("Input two integer value ->");
	scanf("%d %d", &p, &q);
	
	printf("addition\t: %d + %d = %d\n", p, q, p + q);
	printf("substraction\t: %d - %d = %d\n", p, q, p - q);
	printf("multiplication\t: %d * %d = %d\n", p, q, p * q);
	hasilBagi = (float)p / q;
	
	if (p % q == 0) {
            printf("division\t: %d / %d = %.0f\n", p, q, hasilBagi);
        } else {
            printf("division\t: %d / %d = %.2f\n", p, q, hasilBagi);
		};

    return 0;
