//Program to calculate Compound and simple Interest.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
