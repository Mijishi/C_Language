#include <stdio.h>

int main()
{
	char c1;
	int a=0,b=0,c=0,d= 0;
	printf("������һ���ַ�����");
	while ((c1= getchar()) != '\n')
	{
		if ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z'))
			a++;
		else if (c1 == ' ')
			b++;
		else if (c1 >= '0' && c1 <= '9')
			c++;
		else
			d++;
	}
	printf("��ĸ�ĸ���Ϊ��%d\n", a);
	printf("�ո�ĸ���Ϊ��%d\n", b);
	printf("���ֵĸ���Ϊ��%d\n", c);
	printf("�����ַ��ĸ���Ϊ��%d\n",d);
}
