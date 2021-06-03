#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec{};
    if(vec.empty())
        cout<<"True";
    else
        cout<<"False";
    return 0;
}