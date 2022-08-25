#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;

    cout<<a<<endl;
    printf("using pointer %d %d\n", p, &a);
    printf("using pointer %d %d\n", *p, a);
    return 0;
}