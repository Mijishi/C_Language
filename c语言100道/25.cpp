#include <stdio.h>
int main()
{
	int i=9,j=0,k=1;
	while(i>0)
	{
		j= (k + 1) * 2;
		k = j;
		i--;
	}
	printf("%d\n", j);
}
