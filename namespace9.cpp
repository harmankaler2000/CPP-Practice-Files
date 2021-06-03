#include<iostream>
using namespace std;

namespace name
{
    int val = 300;
}

//second way using the 'using' directive
using namespace name;

int main()
{
    //access using scope resolution operator
    //one way to access the identifiers of the namespaces
    // cout<<name::val<<"\n";

    //after using 'using' we can directly access 
    //the values without the scope reolution
    cout<<val<<'\n';
    return 0;
}