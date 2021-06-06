#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,p=0,n=0,z=0,o=0,e=0,i=0 ; printf("Enter the length : "); scanf("%d",&t);
	int arr[t]; 
	for(;i<t;i++)
	{
		printf("Enter the data %d : ",i+1); scanf("%d",&arr[i]);
	}
	for(i=0;i<t;i++)
	{
		if(arr[i]==0)
		 z++;
		else if(arr[i]>0)
		 p++; 
		if(arr[i]<0)
		 n++;
		if(arr[i]%2==0){ if (arr[i]!=0) e++;
		} 
		else
		 o++;  
	}
	printf(" \n Even = %d \n Odd = %d \n zeros = %d \n Positives = %d \n Negatives = %d \n ",e,o,z,p,n);	
}
