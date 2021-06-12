#include<stdio.h>
#include<stdlib.h>

int main()
{
int	max,i=0; printf("Enter the length of an array : "); scanf("%d",&max) ;
int arr1[max],arr2[max]; printf("Enter the array elements: \n\n");
for(;i<max;i++)
scanf("%d",&arr1[i]);printf("the sorted array elements are : \n\n");
for(i=0;i<max;i++)
{
	arr2[i]=arr1[(max-1)-i];printf(" %d ",*(arr2+i));
}

}
