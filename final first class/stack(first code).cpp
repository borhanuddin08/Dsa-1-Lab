#include<stdio.h>

int size = 3, top = -1;
int stack[size];

void push(int x)
{

    if (top >= size -1)
    {
        printf("stack is overflow\n");

    }
    else
    {
        top++;
        stack[top] = x;

    }
}

int pop()
{
    int y;
    if (top <= -1)
    {
        printf("stack under flow");

    }
    else {
        y = stack[top];
        top --;
        return y;

    }

}









int main ()
{

push(10);
push(20);
push(30);
push(40);

int popped_item = pop();

printf("the item is : %d",popped_item);




}
