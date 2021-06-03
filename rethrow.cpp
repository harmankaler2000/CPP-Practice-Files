#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"Constructor or Test\n";
        }
        ~Test()
        {
            cout<<"Destructor of Test\n";
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
        cout<<"Caught "<<i<<endl;
    }
    return 0;
}