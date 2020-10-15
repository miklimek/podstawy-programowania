#include <stdio.h>

int main()
{
    printf("Enter current temperature: ");
    int degrees;
    scanf("%d", &degrees);
    printf("Do you want to switch to Celsius(1) or Kelvin(2): ");
    int which;
    scanf("%d", &which);

    if (which==1)
    {
        int degreesC = degrees - 273;
        printf("Your current temperature is %d degrees Celsius\n", degreesC);
    }
    else if (which==2)
    {
        int degreesK = degrees + 273;
        printf("Your current temperature is %d degrees Kelvin\n", degreesK);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}
