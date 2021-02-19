#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bin(int);
int main(int argc, char *argv[]) {

int num; printf("Enter The Number : "); scanf("%d",&num);
printf("\n The Binary Equivalent is :  ");
	bin(num);
	
	return 0;
}
int bin(int num)
{
if(num>1)
{
	printf(" %d",bin(num/2));
	}	
return num%2;

}
