#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int>::iterator it;
    it = v.begin();
    //removing a specific element
    v.erase(it);
    //printing the vector
    for(auto it = v.begin();it!=v.end();++it)
        cout<<' '<<*it;
    //removing elements within a range
    vector<int> v1 {1,2,3,4,5};
    vector<int>::iterator it1,it2;
    it1 = v1.begin();
    it2 = v1.end();
    it2--;
    it2--;
    v1.erase(it1,it2);
    cout<<endl;
    for(auto it = v1.begin();it!=v1.end();it++)
        cout<<' '<<*it;
    
    return 0;
}