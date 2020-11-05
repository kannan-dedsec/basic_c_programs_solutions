#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x ,d,y,l=500 ;
	int count = 1;
	while(count<=l)
	{
		y=count;
		while (y>0)
		{
			
			x= y %10;
			
			y= y /10; 
			x = (x*x*x)+(d);
			d=x;
			if(count==d)
			{
				printf(" %d \n",count);
			}
		}
	
		d=0;
		count ++ ;
	 } 
	
	return 0;
}
