#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
total 8.0K
   0 drwxr-xr-x 2 root root  55 Sep  9 01:43 .
   0 drwxr-xr-x 5 root root  78 Sep  9 01:39 ..
4.0K -rwxr-xr-x 1 root root 391 Sep  9 01:42 0-positive_or_negative.c
4.0K -rw-r--r-- 1 root root 197 Sep  9 01:43 README.md
