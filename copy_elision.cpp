//avoiding unncessary copying of objects
#include<iostream>
using namespace std;

class B
{
    public:
    //default constructor
    B(const char* str = "\0")
    {
        cout<<"Constructor called"<<endl;
    }

    //copy constructor
    B(const B &b)
    {
        cout<<"Copy costructor called"<<endl;
    }
};

int main()
{
    B obj = "copy";
    return 0;
}