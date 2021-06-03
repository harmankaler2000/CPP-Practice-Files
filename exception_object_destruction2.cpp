#include<iostream>
using namespace std;

class Test1
{
    public:
        Test1()
        {
            cout<<"Constructing an object of Test1\n";
        }
        ~Test1()
        {
            cout<<"Destructing an object of Test1\n";
        }
};

class Test2
{
    public:
        //this throws an integer exception
        Test2()
        {
            cout<<"Constructing an object of Test2\n";
            throw 2;
        }
        ~Test2()
        {
            cout<<"Destructing an object of Test2\n";
        }
};

int main()
{
    try
    {
        Test1 t1; //constructed and destructed
        Test2 t2; //partially constructed as throws int exception
        Test1 t3; //t3 is not constructed as this statement never gets executed
    }
    catch(int i)
    {
        cout<<"Caught "<<i<<endl;
    }
}