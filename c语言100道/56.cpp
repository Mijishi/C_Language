#include<stdio.h>
int main()
{
	int i,j;
	char str[50]={0};
	i=0;
	printf("������һ���ַ���");
	gets(str);
	while(str[i]!='\0')
	{
		i++;	
	}
	printf("��%d���ַ�",i);	
} 
