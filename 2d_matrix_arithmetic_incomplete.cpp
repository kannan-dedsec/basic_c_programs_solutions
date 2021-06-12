#include<stdio.h>
#include<stdlib.h>
int add(int*,int*,int,int),sub(int*,int*,int,int),mul(int*,int*,int,int),div(int*,int*,int,int),mul_assit(int*,int*,int,int);
int main()
{ 
int r,c,i,j; char oper;

printf("\n\t\t\t Enter\n\t The no of rows and columns by providing space between them\n\t\t (eg.2 2) for 2x2 matrix : ");
scanf("%d%d",&r,&c);printf("\n\n");	//getting the length of an matrix

int a[r][c], b[r][c]; //initializing 2 matrices

printf("Enter the operation to perform eg(add = '+',subtract = '-',divison = '/',multiplication= '*') : ");
scanf(" %c",&oper); //operation identification


printf("\n\nEnter the matrix A row by row (eg.for 2x2 matrix 2 2 and 2 2 ) = ");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);      //getting matrix A
	printf("\n\t\t\t\t\t\t\t\t ");
}

printf("\n\nEnter the matrix B row by row (eg.for 2x2 matrix 2 2 and 2 2 ) = ");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);   //getting matrix B
	printf("\n\t\t\t\t\t\t\t\t ");
}

switch(oper) 				//switching operation 
{
	case '+':
		add(a[0],b[0],r,c);  //calling Addition function
		break;
	case '-':
		sub(a[0],b[0],r,c);  //calling Subtratcion function
		break;
	case '*':
		mul(a[0],b[0],r,c);  //calling Multiplication function
		break;
	case '/':
		div(a[0],b[0],r,c); //calling Divison function
		break;
	default : 
		printf("\n \t\t\t\t\toops!!, something wrong 'try again'");
		break;			
}
printf("\n\nThe resultant matrix is : ");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	//	a[i][j] = a[i][j]+b[i][j];
		printf("%d ",a[i][j]);
	} printf("\n\t\t\t  ");
}

return 0 ;
}

int add(int *a,int *b,int r,int c){ //start of addition function 

	int i;
	for(i=0;i<(r*c);i++)
	{
		//printf("\n\n*a = %d, *a+i = %d , *b+i = %d ",*a,*(a+i),*(b+i));
		*(a+i) = *(a+i) + *(b+i);	 
	}
} //end of addition function

int sub(int *a,int *b,int r,int c){  //start of subtraction function 
	
	int i;
	for(i=0;i<(r*c);i++)
	{
		//printf("\n\n*a = %d, *a+i = %d , *b+i = %d ",*a,*(a+i),*(b+i));
		*(a+i) = *(a+i) - *(b+i);	 
	}
	
	
} //end of subtraction function 

int mul(int *a,int *b,int r,int c){ //start of multiplication function 
	
	int i,j;
	for(i=0;i<(r*c);i++)
	{
	//for(j=0;j<c;j++)//printf("\n\n*a = %d, *a+i = %d , *b+i = %d ",*a,*(a+i),*(b+i));
		*(a+i) = mul_assit(a+i,b+i,c,i); 	 
	}	
	
	
} //end of multiplication function
int mul_assit(int* a,int *b,int c,int i){
	
	int sum =0,j;
	
			for(j=0;j<c;j++)
			{
				sum = sum + *(a+i)
			}
}


int div(int *a,int *b,int r,int c){ //start of divison function


	
}//end of divison function


