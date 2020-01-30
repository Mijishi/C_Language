#include <stdio.h>

int f(int i)
{
	if(i==1)
		return i;
	else
		return i*f(i-1);
}
int main()
{
	int i;
	i=f(5);
	printf("%d",i);
}
