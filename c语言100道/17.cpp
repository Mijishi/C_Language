#include <stdio.h>
int main(void)
{
	int a;
	printf("�����������");
	scanf("%d", &a);
	if (a > 100 || a < 0)
		printf("����Խ�磡");
	else
	{
		if (a >= 90)
			printf("��ĳɼ�ΪA\n");
		else if (a >= 60)
			printf("��ĳɼ�ΪB\n");
		else
			printf("��ĳɼ�ΪC\n"); 
	}
	return 0;
}
