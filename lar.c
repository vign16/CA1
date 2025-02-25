#include <stdio.h>

int main() {
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Determine and display the largest number
    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

