#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    A()
    {
        cout<<"A's constructor called"<<endl;
    }
};

class B
{
    //if just this is written then A's constructor is not called
    static A a;
    public:
    B()
    {
        cout<<"B's constructor called"<<endl;
    }
    //gives error that reference is not defined to B::a
    static A getA(){return a;}
};

//use this for A getA() to make sure it does not give
//an error
A B::a;
//this will give the definition of a

int main()
{
    B b;
    //gives error if A B::a is not defined
    A a = b.getA(); //commenting this also works
    //can also do without a B object as it is common
    //ad does not change
    A a1 = B::getA(); //using scope resolution operator
    //only once will the A's constructor will be printed
    return 0;
}