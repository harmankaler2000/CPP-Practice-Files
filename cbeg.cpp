#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> vec;
    //5 strings are inserted
    vec.push_back("1");
    vec.push_back("2");
    vec.push_back("3");
    vec.push_back("4");
    vec.push_back("5");

    //displaying the content
    cout<<"Contents of the vector: "<<endl;
    for(auto itr=vec.cbegin();itr!=vec.end();++itr)
        cout<<*itr<<endl;
    return 0;
}