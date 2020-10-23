#include<stdio.h>
#include<stdlib.h>

int prime_factors();
void main()
{
int num ; printf("\n Enter the Number : "); scanf("%d",&num);
prime_factors(num);
}
int prime_factors(int num)
{
if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0){printf("\nthe prime factors :  1 %d \n\n its a prime number!!!\n\n ",num);}
else{
printf("\n the prime factors are : ");
while(num!=0){
if(num%2==0)
{num=num/2; printf(" 2");}
else if(num%3==0)
{num=num/3; printf(" 3");}
else if(num%5==0)
{num=num/5; printf(" 5");}
else if(num%7==0)
{num=num/7;printf(" 7");}
else{ if(num!=1)printf(" %d",num);num=num-num;}
}
printf("\n\n");
}
}
