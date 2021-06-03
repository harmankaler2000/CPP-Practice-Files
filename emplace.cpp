#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v ={10,20,30};
    //insert element by emplace function at front
    auto it = v.emplace(v.begin(),15);
    //print the elements of the vector
    for(auto it = v.begin();it!=v.end();++it)
        cout<<*it<<" ";
    //insertion at the end
    vector<int> v1 ={10,20,30};
    auto it1 = v1.emplace(v1.end(),16);
    //print the elements of the vector
    cout<<endl;
    for(auto it1 = v1.begin();it1!=v1.end();++it1)
        cout<<*it1<<" ";
    //insertion in middle
    vector<int> v2 ={10,20,30};
    auto it2 = v2.emplace(v2.begin()+2,16);
    cout<<endl;
    for(auto it2 = v2.begin();it2!=v2.end();++it2)
        cout<<*it2<<" ";
}