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
	printf("a�Ķ�����%c\n", a);
	printf("b�Ķ�����%c\n", b);
	printf("c�Ķ�����%c\n", c);
}


