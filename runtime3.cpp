#include<iostream>
using namespace std;

class Base
{
    public:
        //user wants to override this is the derived class
        virtual void func()
        {
            cout<<"I am in base\n";
        }
};

class derived: public Base
{
    public:
        //a mistake by adding argument int a
        //not detected by the compiler as different parameters
        //compiles successfully but this is not the defined functionality
        // void func(int a)
        // {
        //     cout<<"I am in derived class\n";
        // }

        //hence use the override which will mark it as an override 
        //function if return and param does not match throws an error
        //if params are given the following error:
        //member function declared with 'override' does not override a base class member
        void func() override
        {
            cout<<"I am in derived class\n";
        }
};

int main()
{
    Base b;
    derived d;
    cout<<"Compiled successfully\n";
    return 0;
}