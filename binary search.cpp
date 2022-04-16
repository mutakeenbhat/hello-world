#include <stdio.h>
int BinarySearch(int a[],int,int,int);
int main(){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 16;
   int index = BinarySearch(array, 0, n-1,element);
   if(index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",index);
   }
   return 0;
}
  int BinarySearch(int array[], int lb, int ub, int element)
{
   if(lb<ub)
   {
      int middle = lb + (ub-lb )/2;
      if (array[middle] == element)
         return middle;
     else if(element<array[middle])
         BinarySearch(array, lb, middle-1, element);
      else if(element>array[middle]) 
         BinarySearch(array, middle-1,ub, element);
}
else
   return -1;
}
