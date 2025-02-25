#include <stdio.h>

float calculateInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    interest = calculateInterest(principal, rate, time);

    printf("Simple interest: %.2f\n", interest);

    return 0;
}




