#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,t,temp ; printf("Enter the length : "); scanf("%d",&t);
	int arr[t];printf("Enter the data : \n\n\t"); 
	for(i=0;i<t;i++)
	{
		 scanf("%d",&arr[i]);
	}
	for(int i=1;i<t;i=i+2)
	{
		temp= arr[i];
		arr[i]= arr[i-1];
		arr[i-1]= temp; 
	}
	printf("the interchanged array elements are  : \n\n\t");
	for(i=0;i<t;i++)
	printf(" %d ",arr[i]);	
}
