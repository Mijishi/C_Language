#include<stdio.h>
int main()
{
	int i,j,cnt,a[20];
	printf("��Ҫ���뼸����");
	scanf("%d",&cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<cnt;j++)
	{
		printf("%d,",a[j]);
	}
	printf("\b \b");
	return 0;
}
