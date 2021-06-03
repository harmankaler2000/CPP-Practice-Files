#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<"print base class\n";
        }

        void show()
        {
            cout<<"show base class\n";
        }
};

class derived: public Base
{
    public:
        void print()
        {
            //print() is already virtual function in derived class
            cout<<"print derived class"<<endl;
        }
        void show()
        {
            cout<<"show derived class\n";
        }
};

int main()
{
    Base *bptr;
    derived d;
    bptr = &d;
    //virtual function, binded at compile time
    bptr->print();
    //non-virtual function, binded at compile time
    bptr->show();
    return 0;
}