#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p,n,z,i,c,cc,s;
	char str[100];
	printf("enter this shiity randoms : ");
	scanf("%s",&str);
	
	for (i=0; i>100; i++)
	{
		if (str[i]==48 )
		{
			z++;
		}
		else if(str[i]>=49 && str[i]<=57 )
		{
			
			p++;
		}
		else if (str[i]==45 && i!= sizeof(str)-1)
		{
			if( str[i]>=49 && str[i]<=57 )
			n++;
		}
		else if (str[i]>=97 && str[i]<=122 )
		{
			c++ ;
		}
			else if (str[i]>=65 && str[i]<=90 )
		{
			cc++ ;
		}
		else 
		{
			s++;
		}
	}
	p -= n ;
	printf(" The Positives numbers : %d \n The Negatives numbers : %d \n The zeros : %d \n The Alphabets : %d \n the Capital Alphabets : %d \n the unknown symbols : %d \n  ",p,n,z,c,cc,s);
	
	
	return 0;
}
