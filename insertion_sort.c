#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,temp,flag=0;
	printf("Enter the length of an array : " );
	scanf("%d",&n);
	int arr[n-1];
	for(i=0;i<n;i++)
	{
		printf("Enter the Data %d : ",i+1);
		scanf(" %d",(arr+i));
	}
	for(i=0;i<n;i++)
	{
		if(flag) {i=0; flag=0;}
		if(arr[i]>arr[i+1])
		{
			temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1]= temp;
			flag = 1;
		}
	}
	printf("the Insertion sorted array elements are : \n");
	for(i=0;i<n;i++)
	{
		printf(" \n \t\t %d ",arr[i]);
	}
	
}
