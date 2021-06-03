#include<iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch(int n)
        {
            cout<<"Handle partially";
            throw;//rethrow exception
        }
    }
    catch(int n)
    {
        cout<<"Handle remaining\n";
    }
    return 0;
}