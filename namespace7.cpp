#include<iostream>
using namespace std;

//declaring namespace
namespace first
{
    int val1 = 500;
}

//extending the previous namespace again with the same name
namespace first
{
    int val2 = 501;
}

int main()
{
    cout<<first::val1<<"\n";
    cout<<first::val2<<"\n";
}