#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1{1,2,3};
    vector<int> vec2{3,2,1,4};
    vec1 = vec2;
    cout<<"vector 1 becomes: ";
    for(auto it = vec1.begin();it!=vec1.end();++it)
        cout<<' '<<*it;
    return 0;
}