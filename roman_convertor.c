#include<stdio.h>
#include<stdlib.h>
int  roman();
int main ()
{
	int n ;
	printf("enter the year : ");
	scanf("%d",&n);
	roman(n);
	printf("\n");
}
int roman(int n)
	{
		if(n>=1000)
		{
			printf("m");
			roman(n-1000);
		}
		else if(n<1000 && n>=500)
		{
			if(n>=900){printf("cm");roman(n-900);}
			else {printf("d");roman(n-500);}
		}
		else if(n<500 && n>=100)
		{
			if(n>=400){printf("cd");roman(n-400);}
			else {printf("c");roman(n-100);}
		}
		else if(n<100&&n>=50)
		{
			if(n>=90){printf("xc"); roman(n-90);}
			else {printf("l");roman(n-50);}
		}
		else if (n<50 && n>=10)
		{
			if(n>=40){printf("xl");roman(n-40);}
			else {printf("x");roman(n-10);}
		}
		else if(n<10&&n>=5)
		{
			if(n==9){printf("ix");roman(n-9);}
			else {printf("v");roman(n-5);}
		}
		else if(n<5&&n>=1)
		{
			if(n==4){ printf("iv");roman(n-4);}
			else {printf("i");roman(n-1);}
		}
		else
		{
			return 0;
		}
}
