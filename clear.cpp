#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"The current vector is: "<<"\n";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    //clear the vector
    v.clear();
    //print the vector
    for(auto i=v.begin();i!=v.end();++i)
        cout<<" "<<*i;

}