#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
int x , y ,ec,p;
int count =0;
printf(" enter the employees counts : \n");
scanf("%d",&ec);
printf("enter the payment per hour : \n");
scanf("%d",&p);
while (count<=ec)
{
	printf("enter the employee O.T details in hour : \n ");
	scanf("%d",&x);
	y = y+x ;
	count = count+1 ;
}
x = y * p ;
printf("the total O.T  of %d is %d " , ec,x);

	return 0;
}
