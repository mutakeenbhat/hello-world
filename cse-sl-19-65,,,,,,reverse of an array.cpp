#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("original array:\n");
	for(int i=0;i<length;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
		
	}
	
	printf("array in reverse order:\n");
	for(int i=length-1;i>=0;i--)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	
	return(0);
	
	
	
	
	
	
}
