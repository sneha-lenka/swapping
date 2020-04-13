#include<stdio.h>
int main()
{   
    int m;
	printf("enter marks");
	scanf("%d",&m);
	if(100>=m&&m>=85)
	{
		printf("Grade A");
	}
	else if(84>=m&&m>=70)
	{
		printf("Grade B");
	}
	else if(69>=m&&m>=55)
	{
		printf("Grade c");
	}
	else if(54>=m&&m>=40)
	{
		printf("Grade D");
	}
	else if(m<40)
	{
		printf("Grade F");
	}
	return 0;
}
