#include<stdio.h>
int main()
{
	int a[50],reverse[50],i,size;
	printf("enter the size of an array:");
	scanf("%d",&size);
	printf("enter the  no of elements :");
	for( i=0;i<size;i++)
	{ scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{ 
	reverse[i]=a[size-1-i];
	}
	printf("reversing of an array");
	for(i=0;i<size;i++)
	{
		printf("%d",reverse[i]);
		
	}
	return(0);
}
	
	
	
	
	
	
	
	
	

