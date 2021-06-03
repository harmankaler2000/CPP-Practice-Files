#include<iostream>
using namespace std;

class A
{
    protected:
    int x;
    public:
    A(){x = 0;}
    friend void show();
};

class B: public A
{
    public:
    B() : y(0){}
    private:
    int y;
};

void show()
{
    B b;
    cout<<"Default value of A::x = "<<b.x<<endl;

    //cannot access private member of B as friendship is not inherited
    //member "B::y" (declared at line 18) is inaccessible
    //cout<<"The default value of B::y = "<<b.y<<endl;
};

int main()
{
    show();
    return 0;
}