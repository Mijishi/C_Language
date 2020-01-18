#include<stdio.h>
int main()
{
	int i,j,k;
	int ge,shi,bai;
	for(i=100;i<1000;i++)
	{
		ge=i%10;
		shi=(i-bai*100)/10;
		bai=i/100;
		if(i==ge*ge*ge+shi*shi*shi+bai*bai*bai)
		{
			printf("%d\n",i);
		}
	}
}
