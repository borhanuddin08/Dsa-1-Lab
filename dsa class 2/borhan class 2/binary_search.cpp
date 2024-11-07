#include<stdio.h>
int main ()
{

    int n = 9;
    int arr[100] = {90,80,70,60,50,40,30,20,10};
    int low = 0;
    int high = n - 1;
    int mid;
    int element = 80;

    int temp;
    int result;
    printf("sorted array is :");

    for (int i = 0; i <= n - 2; i++)
    {

        for (int j= 0; j<= n-i-2; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

        }

    }

    for (int i = 0; i <n; i++)
    {
        printf(" %d ",result = arr [i]);

    }








    while (low <= high)
    {

        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            printf("\nMid point index is : %d",mid);
            break;

        }
        else if (arr[mid] >element)
        {

            high = mid - 1;

        }
        else
        {
            low = mid +1;

        }
    }
}
