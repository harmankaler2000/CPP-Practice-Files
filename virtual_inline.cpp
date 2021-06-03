#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void who()
        {
            cout<<"I am Base\n";
        }
};

class Derived: public Base
{
    public:
        void who()
        {
            cout<<"I am derived\n";
        }
};

int main()
{
    //here the virtual function is called through object of the class
    //hence will be resolved at runtime if it will be inline
    Base b;
    b.who();
    //here it is called using pointer hence it will 
    //definitely not be inline
    Base *ptr = new Derived();
    ptr->who();
    return 0;
}