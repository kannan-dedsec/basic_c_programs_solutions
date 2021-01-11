#include<stdio.h>
int pri_fact(int);
void main()
{
	int num;
	printf("Enter the number : "); scanf("%d",&num);
	printf("\nthe prime factors are : ");
	pri_fact(num);
	
}
int pri_fact(int num)
{
	int i;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			printf(" %d",i); pri_fact(num/i); break;
		}
	}
}
