#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	scanf("%s %s",&a,&b);
	char *p;
	p=strstr(a,b);
	printf("%d",p-a+1);
	return 0;
}

