#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    //  Rectangle r = {10,5};
    //  cout<<r.length<<endl;
    //  cout<<r.width<<endl;

    //  Rectangle *p=&r;

    Rectangle *p;
   // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));//in c
    p=new Rectangle;

    p->length=15;
    p->width=7;

     cout<<p->length<<endl;
     cout<<p->width<<endl;

    return 0;
}