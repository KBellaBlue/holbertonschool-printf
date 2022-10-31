#include "main.h"
#include <stdio.h>

int main(void)
{
	int retVal = 0;
	int retVal2 = 0;

	retVal = _printf("Ours: %", "test");
	retVal2 = printf("Reg: %", "test");
	printf("\n%d%d\n", retVal, retVal2);
	retVal = _printf("Ours: %s", NULL);
	retVal2 = printf("Reg: %s", NULL);
	printf("\n%d%d\n", retVal, retVal2);
	retVal = _printf(NULL, "test");
	retVal2 = printf(NULL, "test");
	printf("\n%d%d\n", retVal, retVal2);
	return (0);
}
