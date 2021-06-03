#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch(int x)
    {
        cout<<"int caught\n";
    }
    //terminate called after throwing an instance of 'char'
    return 0;    
}