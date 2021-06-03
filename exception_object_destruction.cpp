#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"Constructing an object of Test\n";
        }
        ~Test()
        {
            cout<<"Destructing an object of Test\n";
        }
};

int main()
{
    try
    {
        Test t1;
        throw 10;
    }
    catch(int i)
    {
        cout<<"caught "<<i<<endl;
    }
}