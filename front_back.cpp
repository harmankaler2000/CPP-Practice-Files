#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    cout<<"The fornt is: "<<v.front()<<endl;
    cout<<"The back is: "<<v.back()<<endl;
    return 0;
}