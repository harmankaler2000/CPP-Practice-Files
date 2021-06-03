#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum=0;
    vector<int> vec{1,5,6,3,9,2};
    while(vec.size()>0)
    {
        sum=sum+vec.back();
        vec.pop_back();
    }
    cout<<sum;
    return 0;
}