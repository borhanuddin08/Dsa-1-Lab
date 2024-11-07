#include<iostream>

struct linked_list
{

    int data;
    linked_list *pointer;


};

typedef struct linked_list node;

void printLinkedList(node *first)
{
    node *tempnode = first;
    int sum = 0;
    int cnt = 0;
    int max_value = 0;
    while (tempnode != NULL)
    {

        printf("%d ",tempnode ->data);

        sum = tempnode->data + sum;

         if (tempnode->data > max_value)
        {
            max_value = tempnode->data;
        }

        tempnode = tempnode->pointer;

        cnt++;


    }

    double average = sum/cnt;

    printf("\nThe Sum Is : %d  ",sum);
    printf("\n The average is : %.2f ",average);
    printf("\n value of count : %d",cnt);
    printf("\nMaximum Value is : %d", max_value);

}





int main ()
{

    node *first,*second,*third,*fourth;


    first = new node();
    second = new node();
    third = new node();
    fourth = new node();

    first-> data = 10;
    first -> pointer = second;


    second -> data = 20;
    second -> pointer = third;


    third -> data = 30;
    third -> pointer = fourth;


    fourth ->data  = 40;
    fourth -> pointer = NULL;


    printLinkedList(first);
//   printf("%d %d %d %d",first->data,first->pointer->data,first->pointer->pointer->data,first->pointer->pointer->pointer->data);
// reverse linkedlist try kore dkhbo,max be kora




}
