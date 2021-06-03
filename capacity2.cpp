#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //insert elements
    for(int i=0;i<100;i++)
    {
        v.push_back(i*10);
    }
    cout<<"The size of vector is: "<<v.size();
    cout<<"\n the maximum capacity is: "<<v.capacity();
    return 0;
}