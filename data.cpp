#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40,50};
    //memory pointing to the first element
    int *pos = v.data();
    //prints the vector
    cout<<"The vector elements are: ";
    for(int i=0;i<v.size();++i)
        cout<<*pos++<<" ";
    return 0;
}