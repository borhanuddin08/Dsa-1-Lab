#include <stdio.h>

#define MAX 20
int arr[MAX];

int front = -1, rear = -1;

void enqueue(int num)
{
    if (rear == MAX - 1)
    {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1 && rear == -1)
    {
        front = 0;
    }

    rear++;
    arr[rear] = num;
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
    printf("Queue is underflow");
    }
    else if()
}





int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
