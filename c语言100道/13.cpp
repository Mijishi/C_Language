#include <stdio.h>

int f(int n);

int main(void)
{
	int month, n;
	scanf("%d", &month);
	n = 2 * f(month);
	printf("��������Ϊ%d\n", n);
	return 0;
}

int f(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
