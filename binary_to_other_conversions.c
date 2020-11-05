#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int q , r , deci ;
	int i=0,j,t ;
	char hexa[100];
	printf("\nenter the decimal number :\n");
	scanf("%d",&deci);
	printf("\nenter the base value to convert (ex : 16 for hexa ,2 for binary ,8 for octa) : \n");
	scanf("%d",&t);
	q = deci ;
	while(q!=0)
	{
		r = q % t ;
		if(r<10)
		{
			hexa[i++]	= 	48 + r ;
		}
		else
		{
			hexa[i++]	= 	55 + r ;
		}
		q = q / t ;
	}
	for (j= i ; j>=0 ; j--)
	{
		printf("%c", hexa[j]);
	}
	return 0;
}
