#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={10,20,70,80};
    int x=50;
    //inserting multiple elements at a specific position
    vec.insert(vec.begin()+2,{30,40,x,60});
    cout<<"The vector elements are: ";
    for(auto it:vec)
        cout<< it <<" ";
    return 0;
}