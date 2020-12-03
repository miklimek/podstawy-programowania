#include <stdio.h>

struct Solution
{
    int howMany;
    double root1;
    double root2;
};

struct Solution giveRoots(double a, double b, double c)
{
    struct Solution first;
    double delta=(b*b-4*a*c);

    if (delta<0)
    {
        first.howMany = 0;
    }
    else if(delta==0)
    {
        first.howMany = 1;
        first.root1 = (-b)/(2*a);
    }
    else
    {
        first.howMany = 2;
        first.root1 = (-b-delta)/(2*a);
        first.root2 = (-b+delta)/(2*a);
    }
    
    return first;
}

int main()
{
    // y = ax^2 + bx +c
    double a=1;
    double b=4;
    double c=4;

    struct Solution first = giveRoots(a, b, c);

    if (first.howMany==0)
    {
        printf("The equation does not have any solutions\n");
    }
    else if (first.howMany==1)
    {
        printf("The equation has %d solution and it is: %lf\n", first.howMany, first.root1);
    }
    else
    {
        printf("The equation has %d solutions and they are: x1 = %lf x2 = %lf\n", first.howMany, first.root1, first.root2);
    }
    
    return 0;
}
