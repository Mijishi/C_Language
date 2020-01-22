#include<stdio.h>
int main()
{
	int a,n,i,j;
	long long int sum;
	sum=0;
	scanf("%d%d",&a,&n);
	i=a;
	while(n>0)
	{
		sum=sum+i;
		a=a*10;
		i=i+a;
		n--;
	}
	
	printf("%lld",sum);
}
