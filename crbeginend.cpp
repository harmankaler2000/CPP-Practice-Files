#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={10,20,30,40,50};
    //for loop with crbegin and crend
    for(auto i=vec.crbegin();i!=vec.crend();i++)
        cout<<' '<<*i;
    cout<<'\n';
    return 0;
}