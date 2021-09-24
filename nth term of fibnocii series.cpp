//nth number of fibnoccii series using recursion
#include<stdio.h>
int fib(int);
int main()
{
	int n,result;
	printf("enter the nth term");
	scanf("%d",&n);
	result=fib(n);
	printf("the %d term of fibnocci series is %d",n,result);
	return(0);
}
int fib(int n)
{
	if(n==0)
	{
		
		return(0);
		
	}
	else if(n==1)
	{
		return 1;
		
		
	}
	else
	{
		return(fib(n-1)+fib(n-2));
		
	}
	
	
	
}
