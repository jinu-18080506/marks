#include <stdio.h>

int main() {
    // Declare variables to store marks and results
    float math, science, english;
    float total, percentage;

    // 1. Take marks as input from the user
    printf("Enter marks for Math: ");
    scanf("%f", &math);

    printf("Enter marks for Science: ");
    scanf("%f", &science);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    // 2. Calculate Total and Percentage
    total = math + science + english;
    percentage = (total / 300) * 100;

    // 3. Print the results
    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f / 300\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // 4. Check pass/fail condition (Passing mark is 40%)
    if (percentage >= 40.0) {
        printf("Status: PASSED\n");
    } else {
        printf("Status: FAILED\n");
    }

    return 0;
}
