#include <iostream>
using namespace std;

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    int p;
    p=2*(length+breadth);

    return p;
}

int main()
{
    int length=0, breadth=0;

    printf("Enter length nad breadth");
    cin>>length>>breadth;

    int a=area(length,breadth);
    int peri= perimeter(length,breadth);

    cout<<"Area is %d "<<a<<"perimeter is %d "<<peri;    
    return 0;
}