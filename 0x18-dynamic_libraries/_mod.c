#include <stdio.h>

int mod(int a, int b)
{
	int res;

	if (a < 0)
	{
		a = -1 * a;
		b = -1 * b;
		res = a % b;
		return -1 * res;
	}
	else
	{
		b = -1 * b;
		res = a % b;
		return res;
	}

}
