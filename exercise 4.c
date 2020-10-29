#include <stdio.h>

int cube(int x)
{
    return x*x*x;
}

int main()
{
    printf("Enter an integer: ");
    int x;
    scanf("%d", &x);
    printf("%d\n", cube(x));


    return 0;
}
