#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(){a = 0;}

    //global friend function
    friend void showA(A&);
};

void showA(A& x)
{
    //since showA() is a friend, it can access private members of A
    cout<<"A::a = "<<x.a<<endl;
}

int main()
{
    A a;
    showA(a);
    return 0;
}