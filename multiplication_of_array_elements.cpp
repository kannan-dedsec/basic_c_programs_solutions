#include<stdio.h>
#include<stdlib.h>
int modify(int*,int);
int main()
{
	int n,i=0; printf("enter the length : "); scanf("%d",&n);
	int arr[n];
	printf("enter the array elements :");
	for(;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	modify(arr,n);
	for(i=0;i<n;i++)
	{
			printf(" %d",arr[i]);
	}
}
int modify(int* arr,int n)
{   int i=0;
	for(;i<n;i++)
	*(arr+i) *= 3; 
}
