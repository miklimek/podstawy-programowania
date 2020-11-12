#include <stdio.h>

struct fraction
{
    float numerator;
    float denominator;
};

float addFractions(struct fraction frac1, struct fraction frac2)
{
    struct fraction frac3;
    frac3.numerator = frac1.numerator*frac2.denominator+frac2.numerator*frac1.denominator;
    frac3.denominator = frac1.denominator*frac2.denominator;
    return frac3.numerator/frac3.denominator;
}

float multiplyFractions(struct fraction frac1, struct fraction frac2)
{
    struct fraction frac4;
    frac4.numerator = frac1.numerator*frac2.numerator;
    frac4.denominator = frac1.denominator*frac2.denominator;
    
    return frac4.numerator/frac4.denominator;
}

int main()
{
    struct fraction frac1;
    struct fraction frac2;

    printf("Enter the numerator of the first fraction: ");
    scanf("%f", &frac1.numerator);
    printf("Enter the denominator of the first fraction: ");
    scanf("%f", &frac1.denominator);

    printf("Enter the numerator the second fraction: ");
    scanf("%f", &frac2.numerator);
    printf("Enter the denominator of the second fraction: ");
    scanf("%f", &frac2.denominator);
    
    printf("%f\n", addFractions(frac1, frac2));
    printf ("%f\n", multiplyFractions(frac1, frac2));

    return 0;
}
