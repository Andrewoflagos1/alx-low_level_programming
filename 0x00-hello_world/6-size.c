#include <stdio.h>
/**
 * main - A program that prints the size of various computer types 
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(a));
printf("sixe of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long int:%lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n" (unsigned long)sizeof(f));
return(0);
}
