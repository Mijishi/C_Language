#include<stdio.h>
int main()
{
	int n;
	printf("一共几个人？");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i%3!=0)
		{
			printf("为%d号\t",i);
		}
	}
}

