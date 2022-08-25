#include<stdio.h>
#include<iostream>

using namespace std;

void fun(int *A, int n)
{ 
    A[0]=15;
}

int main()
{
    int A[]={2,4,6,7,8};
    int n=5;
    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<endl;

    for(int x: A)
    cout<<x<<endl;

    return 0;
}
