#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k,m,o=1;
	int l , h ;
	l=65; h=71;
	int p=71;
	for(i=1 ; i<=7 ; i++)
	{
		for(j=l ;j<=p ;j++ )
		{
			if(j==71)
			{
				break;
			}
			printf("%c",j);
		}
		if(h<=70)
		{
			for(m=1; m<=o; m++ )
			{
			printf(" ");	
			}
			o=o+2;
		}
		for(k=h; k>=l ; k--)
		{
			printf("%c",k);
		}
		printf("\n");
		h--;
		
		p--;
	}
	return 0;
}
