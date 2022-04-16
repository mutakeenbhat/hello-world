#include<stdio.h>  
int main()    
{    
 int i,fact=1,number,ps; 

 printf("Enter a number: ");    
  scanf("%d",&number); 
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }   
  printf("Factorial of %d is: %d\n",number,fact); 
  ps=3*number+10;
 printf("Number of program steps =%d",&ps);   
return 0;  
}   
