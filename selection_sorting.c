#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n ,temp=0, i=0,j=0;
	printf("\nEnter the lengeth of the array : ");
	scanf("%d",&n);
	int arr[n-1];
	printf("Enter the elements of an array : \n \t\t");
	for(;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	
	for(;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(arr[j]>=arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp ;
			}
		}
	}
	printf("the sorted elements of an array(using selection sort ) are : \n");
	for(i=0;i<n;i++)
	{
		printf("\n \t\t %d",arr[i]);
	}
	return 0;
}
