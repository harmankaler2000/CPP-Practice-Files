//The program below shows how to assign a vector with an initializer list
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //intialize v with an intialization list
    v.assign({1,2,3});
    cout<<"The list is: "<<endl;
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}