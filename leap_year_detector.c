#include<stdio.h>
#include<stdlib.h>
int ly_c();
void main()
{
int num ;
printf("\nEnter the number : ");
scanf("%d",&num);
ly_c(num);
}
int ly_c(int n)
{int t=1582; 
if(n%4==0){if(n%400==0){printf("\n%d is a %dth leap year from 1582\n",n,((n-t)/4));}
	   else        {printf("\nits not a leap year\n");}
	  }
else printf("\nits not a leap year\n");
}
