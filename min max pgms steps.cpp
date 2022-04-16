#include<stdio.h>  
int main()    
{    
 int i,a[100],max,min,n,ps; 

 printf("Enter  number: \n");    
  scanf("%d",&n); 
  printf("Enter  elements\n ");
    for(i=0;i<=n;i++){    
      scanf("%d",&a[i]);    
  }
  max=a[0] ;
  min=a[0];
   for(i=0;i<=n;i++){
   	if(a[i]>max)
   	max=a[i];
   	if(a[i]<min)
   	min=a[i];
   	} 
  printf("minimum element of array is: %d\nmaximum element of array is: %d\n",min,max); 
  ps=9*n+18;
 printf("Number of program steps =%d",&ps);   
return 0;  
}  
