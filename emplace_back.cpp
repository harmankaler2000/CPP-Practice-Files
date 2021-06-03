#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //int vector
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    for(auto it = v.begin();it!=v.end();it++)
        cout<<' '<<*it;
    //string vector
    vector<string> v1;
    v1.emplace_back("a");
    v1.emplace_back("b");
    v1.emplace_back("c");
    v1.emplace_back("d");
    v1.emplace_back("e");
    v1.emplace_back("f");
    for(auto it1 = v1.begin();it1!=v1.end();it1++)
        cout<<' '<<*it1;
    return 0;
}