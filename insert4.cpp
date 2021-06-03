#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1 = {10,20,30,40};
    vector<int> vec2;
    //inserts at the beginning of vec2
    vec2.insert(vec2.begin(),vec1.begin(),vec1.end());
    cout<<"The vector 2 elements are: ";
    for(auto it = vec2.begin();it!=vec2.end();++it)
        cout<<*it<<" ";
    return 0;
}