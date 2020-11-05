#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num ,t;
	int i ;
	printf("enter the number of multiplication table : \n  ");
	scanf("%d",&num);
	printf("\nHow many times you want to multiply ? : ");
	scanf(" %d",&t);
	for(i=1; i<=t; i++)
	{
		printf("%d x %d = %d \n",num,i,i*num);
	}

	return 0;
}
