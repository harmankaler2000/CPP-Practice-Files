#include<iostream>

class Test
{
    public:
        virtual ~Test()=0;//test now becomes abstract class
};
Test::~Test(){}

int main()
{
    //object of abstract class type "Test" is not allowed: 
    //-- function "Test::~Test" is a pure virtual function
    // Test p;
    // Test *t1 = new Test;
    return 0;
}