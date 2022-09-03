#include <iostream>
using namespace std;

class Diagonal
{
    private: 
        int *A;
        int n;
    
    public:
        Diagonal(int n);
        void create();
        int Get(int i, int j);
        void Set(int i, int j, int x);
        void Display();
        ~Diagonal();
};

Diagonal::Diagonal(int n)
{
    this->n=n;
    A=new int[n*(n+1)/2];
}

Diagonal::~Diagonal()
{
    delete[]A;
}

void Diagonal::create()
{
    int x;
    for(int i=1;i<=n; i++)
    {
        for(int j=1; j<=n ; j++)
        {
            cin>>x;
            if(i==j)
            {
                cout<<A[i-1];
            }
            else{
                cout<<"0 ";
            }
            cout<<endl;
        }
    }
}
int main(){
    
    return 0;
}