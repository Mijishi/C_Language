#include<stdio.h>
int main()
{
	float s,h;
	s=100;
	h=100;
	h=h/2;
	for(int i=1;i<10;i++)
	{
		s=s+h*2;
		h=h/2;
	}
	printf("��10�����ʱ������%f��\n", s);
    printf("��10�η�����%f��\n", h);
}
