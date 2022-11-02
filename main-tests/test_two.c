#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("my test: %i\n", len);
    printf("reg test: %i\n", len2);
   *ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    printf("Reg Length:[%i, %i]\n", len2, len2);
    _printf("Our Length:[%i, %i]\n", len, len);
    printf("Reg Length:[%i, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("Our Multiple characters:[%c],[%c]\n", 'H', 'I');
    len2 = printf("Reg Multiple characters:[%c],[%c]\n", 'H', 'I');
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    len = _printf("Our String:[%s]\n", "I am a string !");
    len2 = printf("Reg String:[%s]\n", "I am a string !");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    printf("Our Null Test below:\n");
    len = _printf(NULL, "test");
    printf("Reg Null Test below:\n");
    len2 = printf(NULL, "test");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percents:[%%]\n");
    len2 = printf("Percents:[%%]\n");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    len = _printf("Percent:[%]\n");
    len2 = printf("Percent:[%]\n");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    len = _printf("Our Percent trip:[%%%]\n");
    len2 = printf("Reg Percent trip:[%%%]\n");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    len = _printf("Our Percent quad:[%%%%]\n");
    len2 = printf("Reg Percent quad:[%%%%]\n");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    len = _printf("Our Percent six:[%%%%%%]\n");
    len2 = printf("Our Percent six:[%%%%%%]\n");
    printf("Our: %i\n", len);
    printf("Reg: %i\n", len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Our Unknown:[%r]\n");
    printf("Reg Unknown:[%r]\n");
    _printf("Our Unknown er:[%r]\n", "test");
    printf("Reg Unknowner :[%r]\n", "test");*/

    printf("\n\nTEST ONE\n\n");
    len = _printf("%k\n");
    len2 = printf("%k\n");
    printf("\nTest my code: %d", len);
    printf("\nTest pp code: %d", len2);
    
    printf("\n\nTEST 2\n\n");

    len = _printf(NULL, "stringy");
    len2 = printf(NULL, "stringy");
    printf("\nTest my code: %d", len);
    printf("\nTest pp code: %d", len2); 

    printf("\n\nTEST 3\n\n");
    len = _printf("normal", NULL);
    len2 = printf("normal", NULL);
    printf("\nTest my code: %d", len);
    printf("\nTest pp code: %d", len2);

    return (0);
}
