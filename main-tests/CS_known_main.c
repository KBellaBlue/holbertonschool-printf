#include "main.h"
#include <stdio.h>

int main(void)
{
	int retVal = 0;
	int retVal2 = 0;

	retVal = _printf("Ours: %\n", "test");
	retVal2 = printf("Reg: %\n", "test");
	printf("\nOurs: %d \n Reg: %d\n", retVal, retVal2);
	retVal = _printf("Ours: %s\n", NULL);
	retVal2 = printf("Reg: %s\n", NULL);
	printf("\nOurs: %d \n Reg: %d\n", retVal, retVal2);
	retVal = _printf(NULL, "test");
	retVal2 = printf(NULL, "test");
	printf("\n Ours: %d\n Reg: %d\n", retVal, retVal2);
	return (0);
}
