#include<iostream>
using namespace std;

class B
{
    public:
    int f(int i)
    {
        cout<<"f(int)\n";
        return i+1;
    }
};

class D: public B
{
    public: 
    //to perform overloading from base class we need to add this
    //or else only derived class will be looked into
    //if this is not added then the output is:
    // f(double)
    // 3.3
    // f(double)
    // 3.6
    using B::f;
    //after adding this the output is:
    // f(int)
    // 3
    // f(double)
    // 3.6
    double f(double d)
    {
        cout<<"f(double)\n";
        return d + 1.3;
    }
};

int main()
{
    D* pd = new D;
    cout<<pd->f(2)<<"\n";
    cout<<pd->f(2.3)<<"\n";
    return 0;
}