#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入分数：");
	scanf("%d", &a);
	if (a > 100 || a < 0)
		printf("分数越界！");
	else
	{
		if (a >= 90)
			printf("你的成绩为A\n");
		else if (a >= 60)
			printf("你的成绩为B\n");
		else
			printf("你的成绩为C\n"); 
	}
	return 0;
}
