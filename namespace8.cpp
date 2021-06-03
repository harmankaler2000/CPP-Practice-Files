#include<iostream>
using namespace std;

namespace
{
    int rel = 300;
}



int main()
{
    //works even without a namespace
    //if there is no global variable else
    //gives the following error
    //"rel" is ambiguous

    //hence for unnamed namespace use:
    cout<<::rel<<"\n";
    double rel = 100;
    //and for others use
    cout<<rel<<"\n";
    return 0;
}