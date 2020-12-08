#include<stdio.h>
#include<stdlib.h>

int fib(int);

int main()
{
	int i,n;
	printf("enter the sequence lenght eg ('21' prints sequence upto 21): ");printf("\n"); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d",fib(i));
	}
	return 0;
}
int fib(int i)
{
	if (i<=1)
	return i;
	else
	return fib(i-1)+fib(i-2);
}


