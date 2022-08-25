#include<iostream>
using namespace std;

int add(int a,int b)//formal parameter
{
    //int c;
    //c=a+b;

    a++;
    cout<<a<<endl;
    return 0;
}

int main()
{
    int num1=10,num2=15,sum;

    sum=add(num1,num2);//actual parameter
    cout<<endl<<num1;

    //cout<<"Sum is "<<sum;

    return 0;
}