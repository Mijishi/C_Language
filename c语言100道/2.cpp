#include<stdio.h>
int main()
{
	double y;
	long i;
	scanf("%ld",&i);
	if(i<=10)
	{
		y=0.1*i;	
	}
	else if(i<=20)
	{
		y=10*0.1+(i-10)*0.075;	
	}
	else if(i<=40)
	{
		y=10*0.1+10*0.075+(i-20)*0.05;	
	}
	else if(i<=60)
	{
		y=10*0.1+10*0.075+20*0.05+(i-40)*0.03;	
	}	
	else if(i<=100)
	{
		y=10*0.1+10*0.075+20*0.05+20*0.03+(i-60)*0.015;
	}
	else
	{
		y=10*0.1+10*0.075+20*0.05+20*0.03+40*0.015+(i-100)*0.01;
	}
	printf("%.3llf",y);
} 
