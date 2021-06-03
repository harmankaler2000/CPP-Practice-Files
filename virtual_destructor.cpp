//undefined behaviour without virtual destructor and solution
#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout<<"Constructing base\n";
        }
        
        // ~base()
        // {
        //     cout<<"Destructing base\n";
        // }
        //this calls the derived class destructor
        virtual ~base()
        {
            cout<<"Destructing base\n";
        }
};

class derived:public base
{
    public:
        void print()
        {
            cout<<"print\n";
        }
        derived()
        {
            cout<<"Constructing derived\n";
        }
        //this destructor will not be called giving undefined behaviour
        //if base dest is not virtual hence add the keyword virtual to it
        ~derived()
        {
            cout<<"destructing derived\n";
            print();
        }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    return 0;
}