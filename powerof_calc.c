#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b ;
	printf("enter the two numbers * pow oof * : \n");
	scanf("%d%d",&a,&b);
	a = pow(a,b);
	
	printf("the ans is : %d",a);
	
	return 0;
	
	
}
