#include <stdio.h>

int main()
{
	static int x;
	printf("%d\n", x);
	
	printf("%d\n", ++x);
	printf("%d\n", x);
	printf("%d\n", x++);
	printf("%d\n", x);

	return 0;
 }
