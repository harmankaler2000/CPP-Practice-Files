//calling construtors and destructors explicitly
#include<iostream>
using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"Constructor\n";
    }
    ~Test()
    {
        cout<<"Destructor\n";
    }
    
    //this can be also done by locally calling the const and the destructor
    // void show()  {  Test();  this->Test::~Test();  }

    //interesting behaviour using function
    friend void fun(Test t);
};

//here Test t will give a copy constructor that is why there is an extra destructor called
void func(Test t)
{
    Test();
    t.~Test();
}

int main()
{
    Test(); //implicit call to constructor
    Test t;
    t.~Test(); //explicit call to destructor
    return 0;
}