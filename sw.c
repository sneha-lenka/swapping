#include<stdio.h>
int main()
{
	printf("enter 2 no.s");
	int a,b;
	scanf("%d %d",&a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped nos are");
	printf("%d %d",a,b);
	return 0;
	
}
