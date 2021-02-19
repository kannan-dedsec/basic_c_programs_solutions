#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bin(int,int);
int main(int argc, char *argv[]) {

int num,tot=0; printf("Enter The Number : "); scanf("%d",&num);
printf("\n The Addition is :  ");
	printf("%d",bin(num,tot));
	
	return 0;
}
int bin(int num,int tot)
{
	tot=tot+num;
if(num==0)
{
   return tot;
	}	
else
{
	bin(num-1,tot);
}

}
