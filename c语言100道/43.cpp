#include<stdio.h> 
int main()
{
	int a[10]={1,3,4,6,8};
	int b[10];
	int num,n,i,j,k;
	int flag=0;
	i=0;
	j=0;
	printf("please input a number");
	scanf("%d",&num);
	while(i<6&&flag==0)
	{
		if(a[i]<num)
		{
			b[j]=a[i];
			i++;
			j++;
		}
		else
		{
			b[j]=num;
			i++;
			j++;
			flag=1;
			break;
		}
	}
	
	for(k=i;k<6;k++)
	{
		b[j]=a[k];
		j++;
	}
	
	for(int m=0;m<6;m++)
	{
		printf("%2d",b[m]);
	}
}
