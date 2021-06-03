#include<iostream>
using namespace std;

class A
{
    public:
    void func(int x)
    {
        cout<<"value of x is: "<<x<<endl;
    }

    void func(double x)
    {
        cout<<"value of x is: "<<x<<endl;
    }

    void func(int x, int y)
    {
        cout<<"value of x is: "<<x<<endl;
        cout<<"value of y is: "<<y<<endl;
    }
};

int main()
{
    A a;
    a.func(1);
    a.func(1.23);
    a.func(1, 2);
}