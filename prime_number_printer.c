#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,m,prime=0,limit;
	printf("Enter The limit : \n");
	scanf("%d",&limit);
	
	for(j=2;j<=limit;j++)
	{
		
		for(i=2 ; i<j ; i++)
		{
			if(j%i==0)
			{
				prime=0 ;
				break ;
			}
			prime=1;
		}
		if(j==2)
		{
			prime=1;
		}
		if(prime)
		{
			printf("\n %d \n",j);
			}	
		
	}
	
	return 0;
}
