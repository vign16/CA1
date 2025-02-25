#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Principal: ");
    scanf("%f", &principal);

    printf("Rate: ");
    scanf("%f", &rate);

    printf("Time: ");
    scanf("%f", &time);

    // Calculate interest
    interest = principal * rate * time / 100;

    printf("Simple Interest: %.2f\n", interest);

    return 0;
}




