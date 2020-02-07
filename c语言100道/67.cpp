#include<stdio.h>
#include<stdlib.h>
struct mess
{
	char name[5];
	char age[3];
	struct mess *next;
};

struct mess *creat()
{
	char ch;
	struct mess *head,*temp,*add;
	head=(struct mess *)malloc(sizeof(struct mess));
	temp=head;
	do
	{
		add=(struct mess *)malloc(sizeof(struct mess));
		printf("请输入姓名:");
		scanf("%s",add->name);
		printf("请输入年龄：");
		scanf("%s",add->age);
		temp->next=add;
		temp=add;
		printf("是否继续存入数据（Y/N）");
		fflush(stdin);
		ch=getchar(); 
	}while(ch=='y'||ch=='Y');
	temp->next=NULL;
	return head;
}

int main()
{
	struct mess *t;
	t=(struct mess *)malloc(sizeof(struct mess));
	t=creat()->next;
	while(t!=NULL)
	{
		printf("姓名：%s\t",t->name);
		printf("年龄：%s\t",t->age);
		t=t->next;
	}
	
} 
