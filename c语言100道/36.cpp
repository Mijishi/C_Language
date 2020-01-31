#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
	printf("请输入星期几的第一个字母:");
	scanf("%c",&ch1);
	switch(ch1)
	{
		case 'm':printf("星期一");break;
		case 't':
			printf("请输入第二个字母");
			fflush(stdin);
			scanf("%c",&ch2);
			if(ch2=='u')
			{
				printf("星期二");
			}
			else if(ch2=='h')
			{
				printf("星期四"); 
			}
			break;
		case 'w':printf("星期三");break;
		case 'f':printf("星期五");break;
		case 's':
			printf("请输入第二个字母");
			fflush(stdin);
			scanf("%c",&ch3);
			if(ch3=='u')
			{
				printf("星期日");
			}
			else if(ch3=='a')
			{
				printf("星期六"); 
			}
			break;
		default:
			printf("error");
	}
	return 0;
} 
