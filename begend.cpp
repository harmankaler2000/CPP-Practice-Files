#include<iostream>
#include <vector>
using namespace std;
//begin and end function
int main()
{
    //declaration of a vector container
    vector<int> myvector{1,2,3,4,5};
    for(auto it=myvector.begin();it!=myvector.end();++it)
        cout<<' '<<*it;
    vector<string> vec1{"a","b","c"};
    for(auto it=vec1.begin();it!=vec1.end();++it)
        cout<<" "<<*it;
    return 0;
}