#include <stdio.h>

long reverseNumber(long x);
int main()
{
	long num;
	scanf("%ld", &num);
	printf("%ld\n", reverseNumber(num));
}

long reverseNumber(long x)
{
	long long ret = 0;
	while (x != 0)
	{
		ret = ret * 10 + x % 10;
		x /= 10;
	}
	if ((long)ret != ret)
		return 0;
	return (long)ret;
}
