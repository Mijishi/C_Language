#include<stdio.h>
int main()
{
	int a = 0, b = 1, c = 0,n;
	scanf("%d",&n);
    while (n--){
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d",c);
}
