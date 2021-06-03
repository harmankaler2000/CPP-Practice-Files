#include<iostream>
using namespace std;

//first namespace
namespace first
{
    int func()
    {
        return 10;
    }
}

//second namespace
namespace second
{
    int func()
    {
        return 20;
    }
}

int main()
{
    //member function of namespace
    //accessed using scope resolution operator
    cout<<first::func()<<"\n";
    cout<<second::func()<<"\n";
    return 0;
}