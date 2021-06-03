#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a;
    //add elements to the list
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    //get the first element 
    int ele = a.front();
    int l = a.back();
    cout<<ele;
    cout<<"\n"<<l;
    return 0;
}