#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    
    
    scanf("%lf %lf %lf", &principal, &rate, &time);

   
    double simple_interest = (principal * rate * time) / 100.0;
    double amount = principal * pow((1.0 + rate / 100.0), time);
    double compound_interest = amount - principal;

   
    printf("Simple Interest=%.2g, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}