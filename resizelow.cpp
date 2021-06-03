//size of the vector is lowered
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    //5 elements are inserted in the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"The contents before resizing"<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    //vector resized to a length of 4
    vec.resize(4);
    cout<<"Contents of vector after resizing: "<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}