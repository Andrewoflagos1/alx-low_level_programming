#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to the variable n
 * n is greater than 5
 * Retun: 0 always
 */
int main(void)
{
	int g;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = g % 10;
	printf("Last digit %d is %d ", g, f);
	if (f > 5)
	{
print("and is greater than 5");
	}
	if (f == 0)
	{
	       printf("and is 0");
	}
	if (f < 6 && f != 0)
	{
	       printf("and is less than 6 and not 0");
	}

       printf("\n:);

       return (0);
}       
