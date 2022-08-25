#include <iostream>
using namespace std;

int fibbo(int n) {

    if((n==1) || (n==0))
    {
        return (n);
    }
    else 
    {
        return (fibbo(n-1) + fibbo(n-2));
    }   
       
}

int main(){
    
    int a,i=0;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    while(i<a)
    {
        cout<<" "<<fibbo(i);
        i++;
    }
    
    cout<<"\n";

    return 0;
}