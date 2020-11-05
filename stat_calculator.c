#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float data_stat(int data[],int);
int main(int argc, char *argv[]) {

int i,j,k,l;printf("\nEnter the data set length : ");scanf("%d",&k);printf("\n");
if(k==0){printf("error empty dataset . tryagain !!!"); return 0;}; //variable declaration and array size declaration
int num[k],asd[k];

for(i=0;i<=k-1;i++)           //getting a data-set in arraging order
{
printf("Enter the data %d : ",i); scanf("%d",&num[i]);
}
for(i=k-1;i>=0;i--)
{	l=0;
	for(j=0;j<=k-1;j++)
	{
		if(num[j]>l)l=num[j];
	}
	for(j=0;j<=k-1;j++)
	{ 
		if(num[j]==l){
		num[j]=0; break;}
		
	}
	asd[i]=l;
}							// Data-set stored in the array asd[] in arranging order
//printf(" Enter the operation to perform : \n\t 1.mean \n\t2.median \n\t3.mode \n\t4.population variance \n\t5.sample vaiance \n\t6.sample standard deviation \n\t7.population standard deviation \n\t8.quartile calc");
data_stat(asd,k);
return 0;
}
float data_stat(int data[],int k)
{
int i,j=0,p=0,z=0,l,freq[k],r_freq[k]; float var_s=0.0000,var_p=0.0000,mean;
for(i=0;i<=k-1;i++)   //mean calculation
{
	j += data[i];
}
l=j;
mean = j/k; printf("\n \t Mean = %f",mean); //printing mean
if(k%2==0){ float med = (data[(k/2)-1]+data[(k/2)]) ; //median
printf("\n \t Median = %f",med/2);}
else
printf("\n \t Median = %d",data[k/2]); //median
for(j=0;j<=k-1;j++)
{
	var_s=var_s+((data[j]-mean)*(data[j]-mean));
}
float med= var_s,t,f;
var_s = med/(k-1); printf("\n \t Sample Variance = %f",var_s); // sample variance 
var_p = med/k ; printf("\n \t Population Variance = %f",var_p); // population variance 
printf("\n \t Sample Standard Deviation = %f",sqrt(var_s)); printf("\n \t Population Standard Deviation = %f",sqrt(var_p));//sample standard deviation and population standard deviation
med=0.75*k;f=med; //finding q3
j=f ; f = f-j; if(f!=0) j=med+1; 
t=0.25*k;f=t; i=f ; f= f -i ; if(f!=0) i=t+1 ; // finding q1
printf("\n \t Inter Quartile Range : %d ",data[j-1]-data[i-1]); //printing inter quartile range 
printf("\n");        //printing frequency table 
for(i=0;i<=k-1;i++)
{
	for(j=0;j<=k-1;j++)
	{
		if(data[i]==data[j])
		{
			p = p+1;
		}
	}
	if(data[i]!=data[i-1])
	{
	printf("\n \t value \t frequency \n \t %d \t %d ",data[i],p);
	freq[i]=p;}
	else if(data[i]==z)
	{
	printf("\n \t value \t frequency \n \t %d \t %d",data[i],p);
	freq[i]=p;
	}
		p=0; //printing frequency tables
		z=10000000;
}
for(i=0;i<=k-1;i++)
{
	if(freq[i]>1000)
	{ 
		freq[i]=0;
	}
}
l=0;
//for(i=0;i<=k-1;i++)
//{
//	l=l+freq[i];	
//	//printf("\n %d",freq[i]);
//}
//for(i=0;i<=k-1;i++)
//{
//	printf("\n%f",freq[i]/l); 	
//}
for(i=0;i<=k-1;i++)
{
	if(l<freq[i])
	{
		l= freq[i];
	}	
}
//printf("\nl=%d",l);
p=0;
for(i=0;i<=k;i++)
{
	for(j=0;j<=k-1;j++)
	{
		if(data[i]==data[j])
		{
			p = p+1;
		}
	} //printf("\n p :%d",p);
	if(p==l){
		if(data[i]!=data[i-1]|| data[i]==0 && data[i+1]!=0)
		printf( " \n\n \t mode : %d",data[i]); 
	}
	p=0;
}

}

