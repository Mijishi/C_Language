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
	printf("第10次落地时共经过%f米\n", s);
    printf("第10次反弹高%f米\n", h);
}
