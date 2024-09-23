//calculating the compound interest
#include <stdio.h>
#include <math.h>  // For power function pow()

int main() {
    float principal, rate, time, compoundInterest, amount;

    // Prompt user to enter the principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate the amount using the compound interest formula
    amount = principal * pow((1 + rate / 100), time);

    // Calculate the compound interest
    compoundInterest = amount - principal;

    // Display the results
    printf("The compound interest is: %.2f\n", compoundInterest);
    printf("The total amount after %.2f years is: %.2f\n", time, amount);

    return 0;
}
