#include<stdio.h>
#include<stdlib.h>
int main() 
{
	char a;
	char b;
	char c;
	char str;
	for (str = 'X'; str <= 'Z'; str++) {
		if (str != 'X' && str != 'Z') {
			c= str;
		}
	}
	for (str = 'X'; str <= 'Z'; str++){
		if (str != 'X' && str != c) {
			a = str;
		}
	}
	for (str = 'X'; str <= 'Z'; str++) {
		if (str != a && str != c) {
			b = str;
		}
	}
	printf("a的对手是%c\n", a);
	printf("b的对手是%c\n", b);
	printf("c的对手是%c\n", c);
}


