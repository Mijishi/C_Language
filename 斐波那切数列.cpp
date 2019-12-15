#include<stdio.h>

int main()
{
	long long int c,ans[100];
	int n,i;
	i=0;
	scanf("%d",&n);
	ans[i]=1;
	ans[i+1]=1;
	for(i=2;i<n;i++)
	{
		ans[i]=ans[i-1]+ans[i-2];
	}
	//输出全部数 
	for(int j=0;j<n;j++)
	{
		printf("%lld\t",ans[j]);
	}
	//找到那个数 
//	printf("%lld",ans[n-1]);
}
