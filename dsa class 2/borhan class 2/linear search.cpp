#include<stdio.h>
int main ()
{
    int  n = 4;
    int arr[100] = {4,6,3,9};
    int search_element = 3;
    for (int i = 0; i<n; i++)
    {
        if (search_element == arr[i])
        {
            printf("Index %d\n",i);
            break;
        }
        else
        {
            printf("NOT FOUND\n");
        }

    }

}
