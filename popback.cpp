#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    v.pop_back();
    for(auto it=v.begin();it!=v.end();++it)
        cout<<' '<<*it;
}