#include<stdio.h>
#include<stdlib.h>
struct student
{
	int num;
	char name[10];
	struct student *next;	
};

struct student *creat()
{
	char ch;
	struct student *add,*temp,*head;
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	temp = head;
	do
	{
	add=(struct student *)malloc(sizeof(struct student));
	printf("请输入学生的学号和姓名：\n");
	scanf("%d",&add->num);
	scanf("%s",add->name);
	temp->next=add;
	temp=add;
	printf("是否要添加新数据：(Y/N)");
	fflush(stdin);
	ch=getchar();
	}while(ch=='y'||ch=='Y');
	temp->next=NULL;
	return head;
} 
void print(struct student *temp)
{
	temp=temp->next;
	while(temp!=NULL)
	{
		printf("学号为：%d",temp->num);
		printf("姓名为：%s\n",temp->name);
		temp=temp->next;
	}
}

void shanchu(struct student *temp)
{
	int n,i;
	struct student *p,*q;
	i=0;
	p=temp; 
	printf("您要删除第几组数据？");
	scanf("%d",&n);
	while(i<n-1)
	{
		p=p->next;
		i++;	
	}
	q=p->next;
	p->next=q->next;
}


int main()
{
	system("color f5");
	struct student *phead;
	phead=creat();
	shanchu(phead);
	print(phead);
}
