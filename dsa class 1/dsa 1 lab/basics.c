
#include<stdio.h>


int main() {
   int arr[100],i;
printf("enter numbers :");
   for(i = 0;i<5;i++)
   {

       scanf("%d",&arr[i]);

   }
   int max = arr[0];
   for(i = 0;i<5;i++)
   {
       if (arr[i]>max)
       {
           max = arr[i];
       }
   }





       printf("max is : %d",max);




}
