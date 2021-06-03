#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
        virtual void fun() = 0;
        // {
        //     cout<<"Hello";
        // }
        int getX(){ return x;}
};

//inherits and implements fun
class Derived: public Base
{
    int y;
    public:
        void fun(){ cout<<"fun() is called\n";}
};

int main()
{
    Derived d;
    d.fun();
    return 0;
}