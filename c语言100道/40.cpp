#include<stdio.h>
int main()
{
	int i,j,k,num;
	k=0;
	printf("������һ����");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			k++;
		}
	}
	printf("%d",k);
	return 0;
}
