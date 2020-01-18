#include <stdio.h>

int main()
{
	int j, i;
	scanf("%d", &j);
	printf("%d=",j);
	for (i=2; i<=j;i++)
		while (j!= i)
		{
			if (j% i == 0)
			{
				printf("%d*", i);
				j /= i;
			}
			else
				break;
		}
	printf("%d\n", j);
	return 0;
}
