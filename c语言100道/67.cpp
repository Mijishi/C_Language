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
		printf("����������:");
		scanf("%s",add->name);
		printf("���������䣺");
		scanf("%s",add->age);
		temp->next=add;
		temp=add;
		printf("�Ƿ�����������ݣ�Y/N��");
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
		printf("������%s\t",t->name);
		printf("���䣺%s\t",t->age);
		t=t->next;
	}
	
} 
