#include<stdio.h>
#include<string.h>
int num(char *p);

int main()
{
	char a[15];
	printf("请输入一段字符");
	scanf("%s",a);
	printf("字符串长度为%d",num(a));
}

int num(char *p)
{
	return strlen(p);
}
