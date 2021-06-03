#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i=0;i<=5;i++)
        g1.push_back(i);
    cout<<"Size is: "<<g1.size();
    cout<<"\n Capacity: "<<g1.capacity();
    cout<<"\n Max_size: "<<g1.max_size();
    //resize the vector to 4
    g1.resize(4);
    //prints the vector after resize
    cout<<"\nSize: "<<g1.size();
    //checks if the vector is empty or not
    if(g1.empty()==false)
        cout<<"\nVector is not empty";
    else
        cout<<"\n Vector is empty: ";
    //shrinks the vector
    g1.shrink_to_fit();
    cout<<"\nVector elements are: ";
    for(auto it=g1.begin();it!=g1.end();it++)
        cout<<*it<<" ";
    return 0;
}