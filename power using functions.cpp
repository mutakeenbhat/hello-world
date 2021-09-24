//power using function
#include<stdio.h>
int power(int,int);
int main()
{
	int a,b,i,result;
	printf("enter a base number ");
	scanf("%d",&a);
	printf("enter an exponent");
	scanf("%d",&b);
	result=power(a,b);
	printf("result is %d",result);
	
}
int power(int a,int b)
{
	
	int power=1;
	while(b>0)
	{
		
		power=power*a;
		b--;
	}
}
