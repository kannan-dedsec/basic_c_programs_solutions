#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n,temp,flag=0;
	printf("enter the length of the array : \t ");
	scanf(" %d",&n);
	int arr[n-1];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the array element %d : ",i+1);
		scanf(" %d",(arr+i));		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>=arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
				flag += 1;			
			}
		}
		if(flag==0)
		{
			break;
		}
		else
		{
			flag=0;
		}
	}
	printf("\n The Bubble Sorted array Elements are : ");
	i=0;
	while(i<n)
	{
		printf("\n \t\t %d",arr[i]); i++ ; 
	}
	
}
