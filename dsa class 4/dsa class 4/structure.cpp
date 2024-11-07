#include<stdio.h>
#include<iostream>
using namespace std;

struct student {
string name;
string id ;
float cgpa;


};


int main ()

{

   struct student student1;
    student1.name ="john";
    student1.id = "0112310486";
    student1.cgpa = 3.50;


    cout<<student1.name<<endl;
    cout<<student1.id<<endl;
    cout<<student1.cgpa<<endl;

    //printf("%c %c %f ")


}
