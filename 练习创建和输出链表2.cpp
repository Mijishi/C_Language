#include<stdio.h>
#include<stdlib.h>

int count=0;
struct data
{
	char name[10];
	int number;
	int bianhao;
	struct data *next;	
};

struct data *f;
struct data *creat()
{
	char ch;
	struct data *head,*temp,*add;
	head=(struct data *)malloc(sizeof(struct data));
	temp=head;
	do
	{
		add=(struct data *)malloc(sizeof(struct data));
		printf("�������鱾�����֣�\n");
		scanf("%s",add->name);
		printf("�����������鱾��������\n");
		scanf("%d",&add->number);
		printf("��������鱾�ı�ţ�\n");
		scanf("%d",&add->bianhao);
		temp->next=add;
		temp=add;
		printf("�Ƿ�����������ݣ�Y/N��");
		fflush(stdin);
		ch=getchar(); 
		count++;
	}while(ch=='y'||ch=='Y');
	temp->next=NULL;
	f=head;
	return head;	
}

int main()
{
	system("color b2");
	struct data *t;
	t=creat()->next;
	while(t!=NULL)
	{
		printf("������%s\t",t->name);
		printf("������%d\t",t->number);
		printf("��ţ�%d\n",t->bianhao);
		t=t->next;
	}
	for(int i=0;i<count;i++)
	{
		free(f);
		f=f->next;	
	}		
} 
