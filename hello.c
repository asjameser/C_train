#include <stdio.h>

int main()
{
	printf("hello world\n");
	
	int feet,fathoms;
	
	fathoms = 2;
	feet = 6 * fathoms;
	printf("there are %d feet in %d fathoms!\n",feet, fathoms);
	printf("yes, i said %d feet!\n", 6 * fathoms);
	 
	return 0;
}
