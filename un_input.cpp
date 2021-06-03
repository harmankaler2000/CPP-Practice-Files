#include<iostream>
using namespace std;

int main()
{
    int input;
    int count = 0;
    cout<<"Unknown number of inputs if if else while not used: ";
    while(cin>>input)
        count++;
    
    cout<<"Paramter count: "<<count;
    return 0;
}