#include<stdio.h>
int main()
{
	int i,j;
	char str[50]={0};
	i=0;
	printf("请输入一串字符串");
	gets(str);
	while(str[i]!='\0')
	{
		i++;	
	}
	printf("有%d个字符",i);	
} 
