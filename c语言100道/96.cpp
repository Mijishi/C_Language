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
	printf("������ѧ����ѧ�ź�������\n");
	scanf("%d",&add->num);
	scanf("%s",add->name);
	temp->next=add;
	temp=add;
	printf("�Ƿ�Ҫ��������ݣ�(Y/N)");
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
		printf("ѧ��Ϊ��%d",temp->num);
		printf("����Ϊ��%s\n",temp->name);
		temp=temp->next;
	}
}

void shanchu(struct student *temp)
{
	int n,i;
	struct student *p,*q;
	i=0;
	p=temp; 
	printf("��Ҫɾ���ڼ������ݣ�");
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
