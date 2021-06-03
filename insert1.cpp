#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40};
    //inserts 3 at the front
    vector<int>::iterator it = v.insert(v.begin(),3);
    //inserts 2 at front
    v.insert(it,2);
    int i=2;
    //inserts 7 at the i-th index
    it = v.insert(v.begin()+i,7);
    cout<<"The vector elements are: \n";
    for(auto it=v.begin();it!=v.end();++it)
        cout<<*it<<" ";
    return 0;
}