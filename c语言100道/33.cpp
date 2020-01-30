#include <stdio.h>

int Agenumber(int n)
{
if(n==1)
	return 10;
else
	return (Agenumber(n-1))+2;
}
int main()
{
	printf("第5个人的年龄是%d岁", Agenumber(5));
	return 0;
}

