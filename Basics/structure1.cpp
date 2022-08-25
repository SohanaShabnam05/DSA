#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct Rectangle r1={10,5};
    printf("%lu\n", sizeof(r1));
    printf("Area of rectangle is %d", r1.length*r1.breadth);
    return 0;
}