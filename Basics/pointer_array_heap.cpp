#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{// in C language
    int *p;
    p=(int *)malloc(5*sizeof(int));
     
    p[0]=10; p[1]=15; p[2]=14;
    p[3]=21; p[4]=30;

    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}