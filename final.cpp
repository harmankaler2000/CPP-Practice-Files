#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void myfun() final
    {
        cout<<"Final myfun() in Base class"<<endl;
    }
};

class Derived: public Base
{
    public:
    //gives error
    //cannot override 'final' function "Base::myfun"
    // void myfun()
    // {
    //     cout<<"myfun() in Derived class"<<endl;
    // }
    void func()
    {
        cout<<"fun() in Derived class"<<endl;
    }
};

//class is defined as final hence cannot be inherited
class A final
{

};

//a 'final' class type cannot be used as a base class
// class B: public A
// {

// }

int main()
{
    Derived d;
    d.myfun();
    d.func();
    return 0;
}