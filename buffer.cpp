//standard
#include<iostream>
//for <streamsize>
#include<ios>
//for numeric limit
#include<limits>

using namespace std;

int main()
{
    int a;
    char str[80];

    cin>>a; //-4
    //discards input buffer
    //if not added skips str as it takes \n as a input and prints a
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //cin.sync(); //does not work in all cases
    cin>>ws;
    cin.getline(str,80);
    cout<<a<<endl;
    cout<<str<<endl;
}