#include<iostream>
using namespace std;

class base
{
    public:
        base(){cout<<"base class constructor\n";}
        virtual ~base()
        {
            cout<<"base class destructor\n";
        }

        void show()
        {
            cout<<"show() called on base class\n";
        }
        virtual void print()
        {
            cout<<"print() called on base class\n";
        }
};

class derived:public base
{
    public:
        derived():base()
        {
            cout<<"Derived class constructor\n";
        }
        virtual ~derived()
        {
            cout<<"derived class destructor\n";
        }

    private:
        virtual void print()
        {
            cout<<"print() called on derived class\n";
        }
};

int main()
{
    cout<<"printing with base class pointer\n";
    //base class pointer with derived class memory
    base *b = new derived();
    b->show();
    // the virtual print in base class is called but it is overridden
    // in derived class and that is also private,but the contents
    // are printed this code works because base class
    // defines a public interface and drived class overrides
    // it in its implementation
    b->print();
    return 0;
}