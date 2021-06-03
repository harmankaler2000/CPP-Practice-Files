#include<iostream>
using namespace std;

//nested namespace
namespace out
{
    int val = 5;
    namespace in
    {
        int val2 = val;
    }
}

int main()
{
    //accessign value in the nested namespace
    //they are represented in a hierarichal fashion
    //same as classes
    cout<<out::in::val2;
    return 0;
}