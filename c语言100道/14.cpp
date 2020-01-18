#include<stdio.h>
int main()
{
	int i,j,k,m;
	int count=0;
	int a[100];
	k=0;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			a[k]=i;
			count++;
			k++;
		}
	}
	printf("ÓĞ%d¸öËØÊı\n",count);
	for(m=0;m<count;m++)
	{
		printf("%d\t",a[m]);
	}
}
