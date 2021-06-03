//size of the vector container is increased and
//new elements are initialized with specified value
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    //5 elements are inserted
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"contents of the vector before resizing: "<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    //resizing vector
    vec.resize(12,9);
    cout<<"Contents of vector after resizing: "<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}