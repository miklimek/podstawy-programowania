#include <stdio.h>

int main()
{
    int array[10]={2,34,64,23,1,265,36,76,46,93};
    int smallest=array[0];

    for (int i=1; i<10; ++i)
    {
        if (array[i]<smallest)
        smallest=array[i];
    }
    printf ("The smallest number is: %d\n", smallest);


    return 0;
}
