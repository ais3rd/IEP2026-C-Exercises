#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age;
    float score;
    char grade;
    bool isEligible;

    printf("=== Variable Review Program ===\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your test score (0.0 to 100.0): ");
    scanf("%f", &score);

    if (score >= 90.0f) {
        grade = 'A';
    } else if (score >= 80.0f) {
        grade = 'B';
    } else if (score >= 70.0f) {
        grade = 'C';
    } else if (score >= 60.0f) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    isEligible = (age >= 18) && (score >= 60.0f);

    printf("\nReview Summary:\n");
    printf("Age: %d\n", age);
    printf("Score: %.1f\n", score);
    printf("Grade: %c\n", grade);

    if (isEligible) {
        printf("Result: Eligible for the program.\n");
    } else {
        printf("Result: Not eligible.\n");
    }

    return 0;
}
