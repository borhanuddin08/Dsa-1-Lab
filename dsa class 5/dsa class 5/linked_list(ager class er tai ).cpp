#include<iostream>

struct linked_list
{

    int data;
    linked_list *pointer;


};

typedef struct linked_list node; //linked_list e type node dhore define korlam


int main ()
{
    node *start, *b, *c,*d;   //
    start = new node(); // notun ocde creat hoice r onno ta k point kore ace
    b = new node();
    c = new node();
    d = new node();

    start->data = 10;
    start->pointer = c; //start er pointer er sthe b er pointer link korteci

    b->data =20;
    b->pointer = c;

    c->data =30;
    c->pointer = d;

    d->data = 40;
    d->pointer = start;



//  printf("%d %d %d %d" ,start->data,b->data,start->pointer->data,b->pointer->data);

    printf(" %d \n",start->pointer->pointer->data); //a to c to d er data point kore ace
    printf(" %d \n",b->pointer->pointer->data);
    printf(" %d \n",start->pointer->pointer->pointer->data); //10 print korte hobe







}
