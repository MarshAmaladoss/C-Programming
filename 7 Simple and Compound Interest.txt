// 7. Simple interest and Compound Interest
#include <stdio.h>
#include <math.h>
int main()
{
    float CI, r, P, n, Amount, SI;
    printf("Enter Principal:");
    scanf("%f", &P);
    printf("Enter the rate:");
    scanf("%f", &r);
    printf("Enter No. of years:");
    scanf("%f", &n);
    
    // formula to calculate simple interest
    SI = (P * n * r)/100;
    printf("Simple Interest: %0.2f\n", SI);
    
    // formula to calculate compound interest
    Amount = P * (pow((1 + r / 100), n));
    CI = Amount - P;

    printf("Compound Interest: %0.2f\n", CI);
    return 0;
}