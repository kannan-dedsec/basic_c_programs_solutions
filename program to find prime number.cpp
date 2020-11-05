#include <stdio.h>
 
int main()
{ 
 int num,i,flag=0 ; 
 printf("enter the number : ");
 scanf("%d",&num);
 for(i=2 ; i<=num/2 ; i++)
 {
 	if(num%i==0)
 	{
 		flag++;
 		break;
	 }
 }
 
 if(flag==0&&num!=1)
 {
 	printf("\n its a prime");
 }
 else
 {
 	printf("\n its not a prime");
 }
  return 0;
}
