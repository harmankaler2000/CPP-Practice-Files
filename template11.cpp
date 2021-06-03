#include<iostream>
using namespace std;

//sepcial thing is: calculation is done at compile time
template<int n> struct struct_fun
{
    enum {val = 2 * struct_fun<n - 1>::val};
};

template<> struct struct_fun<0>
{
    enum {val = 1};
};

int main()
{
    cout<<struct_fun<8>::val<<endl;
    return 0;
}