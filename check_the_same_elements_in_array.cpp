#include<stdio.h>
#include<stdlib.h>

int main()
{
int n ,i=0; printf("enter the length : "); scanf("%d",&n);
int arr[n]; printf("enter the array elements: \n\n");
for(;i<n;i++)
scanf("%d",(arr+i));
for(i=0;i<n;i++)
{
	if(arr[i]==arr[(n-1)-i]&& i!=(n-1)-i)
	printf("\n\n the %dth and %dth element are same which is %d=%d",i,(n-1)-i,arr[i],arr[(n-1)-i]);
}
}
