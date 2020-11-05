#include <stdio.h>
 
int main()
{

int num ;
printf("Enter the number : ");
scanf("%d",&num);
fact(&num); printf("\n \t %d",num);
}
fact(int *x)
{
	int y=1,i=1 ;
	for( i=1 ;i<=*x; i++)
	{
		y=y*i;
	}
	*x = y;
}



