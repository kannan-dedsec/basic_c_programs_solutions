#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i=0; printf("enter the length : "); scanf("%d",&n);
	int arr[n];
	int j=100000000 ;int *k;k=&j;printf("enter the array elements :");
	for(;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(arr+i)<*k)
		{
			*k=*(arr+i);
		}
	}
	printf("the smallest value is : %d",*k);
}
