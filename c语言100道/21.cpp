#include <stdio.h>

int main()
{
	char c1;
	int a=0,b=0,c=0,d= 0;
	printf("请输入一个字符串：");
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
	printf("字母的个数为：%d\n", a);
	printf("空格的个数为：%d\n", b);
	printf("数字的个数为：%d\n", c);
	printf("其他字符的个数为：%d\n",d);
}
