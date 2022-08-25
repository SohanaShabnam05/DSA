#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);

    return p;
}

int main()
{
    Rectangle r={0,0};

    printf("Enter length nad breadth");
    cin>>r.length>>r.breadth;

    int a=area(r);
    int peri= perimeter(r);

    cout<<"Area is %d "<<a<<"perimeter is %d "<<peri;    
    return 0;
}