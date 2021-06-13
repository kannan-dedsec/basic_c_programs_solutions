#include<stdio.h>
#include<conio.h>

int main()
{
	int r,c; printf("\n \t Enter thr row and column eg:3 3 for 3x3 matrix : "); scanf("%d%d",&r,&c);
	int a[r][c],temp=0,b[r][c];
	
	int i ,j;
	printf("\n \t Enter the matrix element : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		   
		}
		printf("\n \t \t \t\t    ");
	 }
	 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  
			 b[i][j] = a[j][i];
		}
		printf("\n");
	 }
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
		  if(a[i][j]==b[i][j])
		  temp++;
		  //printf("a[%d][%d] %d == %d  b[%d][%d],temp = %d\n",i,j,a[i][j],b[i][j],temp);
	
		}
		printf("\n");
	 }
	 //printf("%d",temp);
	 if(temp== r*c)
	 {
	 	printf("its a symmetric matrix");
	 }
	 else
	 {
	 	printf("its not a symmetric matrix ");
	 }
	  
	
		
}
