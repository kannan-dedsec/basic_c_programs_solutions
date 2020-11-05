#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{  
int a,b,i ;
printf("what operation you want to perform(enter the s.no to represent it (eg 1 is for factorial) :\n \t 1.factorial of a number : \n \t 2.prime or not: \n \t 3.odd or even \n \t 4.exit: \n\t ");
scanf("%d",&a);
if(a==4)
{
	exit(0);
}
printf("enter the number : \n ");
scanf("%d",&b);

switch(a)
{
	case 1:
		for(i=b-1;i>=1;i--)
		{
			b=b*i;
		}
		printf("%d",b);
		break;
	case 2:
		if(i==1)
		{
			printf("its not a prime number !!! \n");
		}
		else if (i==2)
		{
			printf("it is a prime \n");
		}
		else{
		
				for(i=b-1;i>=2;i--)
				{
					if(b%i==0)
					{
						printf("it's not a prime ");
						break;
					}
					else if(b%i>0)
					{
						if(i==2)
						{
							printf("its a prime");
						}
					}
				}
			}
		break;
	case 3 :
		if(b%2==0)
		{
			printf("its even !!");
			}
		else
		{
			printf("its odd !!");
			}	
		break;
	case 4 :
		exit(0);
		break;
	default :
		printf("error !!!");
		break ;
}

return 0 ;
  } 
