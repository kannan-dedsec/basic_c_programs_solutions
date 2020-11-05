#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	  char i ;float c,b,a ;
	printf("ENTER THE OPERATION YOU WANT TO DO (i.e +,-,*,%) : \n");
	scanf("%c",&i);
	
	switch (i)
	{
		case '+':
		printf("enter a and b : \n ");
		scanf("%f %f",&a,&b);
		c=a+b;
		printf("the answer is : %1f \n",c);
		break;
		case '-':
		printf("enter a and b : \n ");
		scanf("%f %f",&a,&b);
		c=a-b;
		printf("the answer is : %1f \n",c);
		break;
		case '*':
		printf("enter a and b : \n ");
		scanf("%f %f",&a,&b);
		c=a*b;
		printf("the answer is : %1f \n",c);
		break;
		case '%':
		printf("enter a and b : \n ");
		scanf("%f %f",&a,&b);
		c=a/b;
		printf("the answer is : %f \n",c);
		break;
		default:
		printf("error!!,try again!!!");
	}
	return 0;
}
