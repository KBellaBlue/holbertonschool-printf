<p align="center"> <h1> :computer: printf(): A Crash Course :computer: </h1> </p>


## Synopsis
_printf can be used as a replacement for the stdio.h function printf. Our function can be used to print characters, strings, and integers. Our function returns the number of characters printed (excluding the null byte used to end output to strings) and writes output to the standard output stream. Please note that our function does NOT handle flag characters, field width, precision, or length modifiers.


## Definition & Parameters
**printf()**
<p>A function in the ANSI C standard library included in the “stdio.h” file</p>
<p>Used to print out different pieces of information</p>


**Syntax:**
```
int printf(const char *format, ...);
```

<p>The first argument is a string that contains the text to be printed on the screen. The string may contain format specifiers, which are used to specify how the subsequent arguments are to be displayed. Format specifiers begin with a percent sign (%) and are followed by optional format modifiers and conversion specifiers.</p>


This project handles the following conversion specifiers:
```
%c - signed character
%s - string
%d - integer
%i - integer
```

## Examples

#### %c (Character) Specifier
```
#include <stdio.h> /*include stdio header file that allows us to perform input and output operations*/

int main() /*calls the main function and returns an integer*/
{
	char first_ch = 'a'; /*first_ch character is a*/
	printf("%c\n", first_ch); /*print first_ch character followed by a new line*/
	/*^the value of first_ch (a) will replace %c*/
	return 0; /*0 is the standard for the successful execution of a program*/
}
```
Output
```
a
```

#### %s (String) Specifier
```
#include <stdio.h>
int main()
{
	char s[]="Go Holberton"; /*s string is Go Holberton*/
	printf("The string value of s is %s \n",s); /*print string value of s followed by a new line*/
	
	return 0;
}
```
Output
```
The string value of s is Go Holberton
```


#### %d & %i (Decimal Integer) Specifier 

```
#include <stdio.h> 
int main()
{
	int found = 2005, curr = 2022; /* found integer is 2005, curr integer is 2022*/
	printf("%d\n", found); /*print found integer followed by a new line*/
	printf("%i\n", curr); /*print curr integer followed by a new line*/
	
	return 0; 
}
```
Output
```
2005
2022
```

## Files

```
man_3_printf
	custom manpage for custom _printf function
_printf.c
	contains custom _printf function
main.h
	contains function prototypes and libraries spread across all files
_formats.c
	contains function definitions to print characters, strings, and integers

_write_char.c
	contains function definition to write characters
```

## Installation

<p>In your terminal, in the subdirectory of your choosing, type: </p>

```
$ git clone https://github.com/KBellaBlue/holbertonschool-printf.git
```

<p>:dancer: Authors :dancer:</p>
<p>Julia Bullard & Khiera Freeman</p>
