#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int c, p, tot_m , tot ;
int picks ;
printf(" \nenter the total number of matches  : ");
scanf(" %d",&tot_m);
tot = tot_m;

while(tot>=0)
{
	printf("  \n pick up the match sticks 3 or 4  between 21 : ");
	scanf(" %d",&picks);
	if(picks==3 || picks ==4 )
	{
		tot = tot - picks;
		if(tot<=0)
		{
			printf("\nyou lost computer won !!! ( pathetic humans )");
		}
		
		else if(tot%2!=0)
		{
			tot = tot-3 ;
			printf("\n computer picks 3 ");
			if(tot<=0){
			
			printf("\nplayer won !!! whatever ");
			break;	
		}
		 } 
		 else if (tot%2==0)
		 {
		 	tot= tot-4 ;
		 	printf("\n computer picks 4 ");
		 		if(tot<=0)
		 		{
				 
					printf("\nplayer won !!! whatever ");
					break ;
				}
		 }
		 
		
	}
	else{
		
		printf(" \n you tool invalid match sticks ");
		
	}
}
 

	return 0;
}
