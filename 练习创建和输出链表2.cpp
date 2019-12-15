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
		printf("请输入书本的名字：\n");
		scanf("%s",add->name);
		printf("请输入所存书本的数量：\n");
		scanf("%d",&add->number);
		printf("请输入该书本的编号：\n");
		scanf("%d",&add->bianhao);
		temp->next=add;
		temp=add;
		printf("是否继续存入数据（Y/N）");
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
		printf("书名：%s\t",t->name);
		printf("数量：%d\t",t->number);
		printf("编号：%d\n",t->bianhao);
		t=t->next;
	}
	for(int i=0;i<count;i++)
	{
		free(f);
		f=f->next;	
	}		
} 
