//calculating the compound interest
#include <stdio.h>
int main() {
    float principle_amount, rate, time, simpleinterest;

    printf("Enter principle amount: ");
    scanf("%f", &principle_amount);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleinterest = (principle_amount * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simpleinterest);

    return 0;
}
