#include<stdio.h>
#include<stdlib.h>

int main()
{	int t=0 ;
	printf("Enter the length : "); scanf("%d",&t);
	int arr[t],i,j;
	for(i=0;i<t;i++)
	{
		arr[i]=i+1 ;
		
	}
	for(i=1;i<t;i++)
	{
		if(arr[i]!=0){
					for(j=arr[i]+arr[i];j<=t;j += arr[i])
					{//printf(" %d",j);
						arr[j-1] = 0 ; 
					}
		}
			
	}
	for(i=0;i<t;i++) {
	if(arr[i]!=0)	
	printf(" \n%d",arr[i]);
	}
	
}
