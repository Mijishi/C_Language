#include <stdio.h>

int t(int n);

int t(int n)
{
	int count = 0;
	while (n != 0)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", t(n));
	return 0;
}


