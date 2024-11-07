#include<stdio.h>

int main()
{
    int n = 4;
    int arr[4],temp,i,j;

    for(i = 0;i<n;i++)
   {

       scanf("%d",&arr[i]);
   }
    for(i = 0;i<=n - 2;i++)
    {

        for(j = i+1;j<n;j++)
        {
            if ( arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

     for(i = 0;i<n;i++)
   {

       printf("  %d",arr[i]);
   }


}
