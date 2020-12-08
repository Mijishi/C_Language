#include<stdio.h>
void qsort(int a[],int left,int right)
{
	int i,j,key;
	i=left;
	j=right;
	key=a[i];
	if(left >= right)
        return;
	while(i<j)
	{
		while(i<j && key<a[j])
		{
			j--;
		}
		a[i]=a[j];
		while(i<j && key>a[i])
		{	
			i++;
		}
		a[j]=a[i];
	}
	a[i]=key;
	qsort(a,left,i-1);
	qsort(a,i+1,right);
}
int main()
{
	int a[8]={1,4,3,6,2,7,8,66};
	for(int i=0;i<8;i++)
	{
		printf("%-3d",a[i]);
	}
	printf("\n");
	
	qsort(a,0,7);
	for(int i=0;i<8;i++)
	{
		printf("%-3d",a[i]);
	}
	return 0;
} 

