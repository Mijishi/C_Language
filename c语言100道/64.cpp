#include<stdio.h>
int main()
{
	int n;
	printf("һ�������ˣ�");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i%3!=0)
		{
			printf("Ϊ%d��\t",i);
		}
	}
}

