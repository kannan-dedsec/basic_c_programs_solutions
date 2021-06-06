#include<stdio.h>
#include<stdlib.h>

int main()
{
	int len, i,j,k=0,temp=0,t=0;
	printf("Enter the length of an array : "); scanf("%d",&len);
	int arr[len];
	for(i=0;i<len;i++)
	{
		printf("\nEnter the data %d : ",i+1); scanf("%d",&arr[i]);
	}
	for(i=1;i<len;i++)
	{
		for(j=i;j>0;j--)
		{
			if(arr[i]<arr[j-1])
			{
				t++;
			}
		}
		printf("\n%d",t); 
		for(k=i;t>0;t--)
		{ //printf("flag");
			temp = arr[k];
			arr[k]= arr[k-1];
			arr[k-1]=temp ;
			k--;
		}
		//t=0;
	}
	for(i=0;i<len;i++)
	{
		printf("\n sorted Data %d : %d",i+1,arr[i]);
	}
}
