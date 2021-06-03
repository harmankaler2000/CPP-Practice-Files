#include<iostream>
using namespace std;

//val inside namespace of int type
namespace one
{
    int val = 500;
} // namespace one

//global var val of double type
double val = 100;

int main()
{
    /*
    namespaces.cpp:8:12: error: conflicting declaration 'double value'
     double value;
            ^~~~~
    namespaces.cpp:6:9: note: previous declaration as 'int value'
        int value;
    int value;
    value = 0;
    double value;
    value = 0.0;

    Solution: use namespaces
    */
    //local variable val of float type
    {
        float val = 200.13;
        cout<<"local value for val: "<<val<<endl;
    }
    //accessing val from the namespace
    //works fine
    cout<<one::val<<"\n";

    //accessing the global val value
    cout<<"global val: "<<val<<endl;
    return 0;
}