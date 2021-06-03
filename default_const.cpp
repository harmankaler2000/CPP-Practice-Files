#include<iostream>
using namespace std;

class construct
{
    public:
    int a,b;
    //default constructor
    //if commented a, b will be printed with garbage value
    construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    //default const is called automatically
    construct c;
    cout<<"default constructor\n";
    cout<<c.a<<" "<<c.b<<endl;
}