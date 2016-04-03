#include <stdio.h>
#include "utility.h"

int main(int argc, char * argv[])
{
	printf("hello C\n");
	printf("sum(5,5): %d\n", sum(5, 5));

	// perform some arithmetic
	printf("5^2: %d\n", squared(5, 2));
	printf("5 is %s\n", oddoreven(5));
	return 0;
}
