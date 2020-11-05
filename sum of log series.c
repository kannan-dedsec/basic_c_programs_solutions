#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int z,n;
	float a=0.00,b,y=1.00,x;
	printf("enter the pattern limit : \n");
	scanf("%d",&n);
	printf("enter the 'x' number : \n");
	scanf("%f",&x);
	for(z=1;z<=n;z++)
	{
		b=y*pow((x-1)/x,z);
		y=0.50;
		a=a+b;
	}
	printf("the sum of %d series is %f ",n,a);
	
}
