#include<stdio.h>
#include<string.h>
int num(char *p);

int main()
{
	char a[15];
	printf("������һ���ַ�");
	scanf("%s",a);
	printf("�ַ�������Ϊ%d",num(a));
}

int num(char *p)
{
	return strlen(p);
}
