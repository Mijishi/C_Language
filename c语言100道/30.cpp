#include<stdio.h>
int main()
{
	int i,j,n;
	int a[10];
	printf("输入几个数？");
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for (int i = 0; i < n; i++)
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (a[i] == a[j])
			{
                printf("True");
                break;
            }
        }
    }
    printf("False");
}
