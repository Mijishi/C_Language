#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
	printf("���������ڼ��ĵ�һ����ĸ:");
	scanf("%c",&ch1);
	switch(ch1)
	{
		case 'm':printf("����һ");break;
		case 't':
			printf("������ڶ�����ĸ");
			fflush(stdin);
			scanf("%c",&ch2);
			if(ch2=='u')
			{
				printf("���ڶ�");
			}
			else if(ch2=='h')
			{
				printf("������"); 
			}
			break;
		case 'w':printf("������");break;
		case 'f':printf("������");break;
		case 's':
			printf("������ڶ�����ĸ");
			fflush(stdin);
			scanf("%c",&ch3);
			if(ch3=='u')
			{
				printf("������");
			}
			else if(ch3=='a')
			{
				printf("������"); 
			}
			break;
		default:
			printf("error");
	}
	return 0;
} 
