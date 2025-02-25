#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    // Ask the user to enter the principal amount, rate of interest, and time period
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest by calling the function
    interest = calculateSimpleInterest(principal, rate, time);

    // Display the result
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}



