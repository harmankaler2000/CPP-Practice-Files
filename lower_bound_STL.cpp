// You are given integers in sorted order. Also, you are given
// queries. In each query, you will be given an integer and you 
//have to tell whether that integer is present in the array. 
//If so, you have to tell at which index it is present and if it 
//is not present, you have to tell the index at which the smallest 
//integer that is just greater than the given number is present.
// Lower bound is a function that can be used with a sorted vector. 

// default (1)	
// template <class ForwardIterator, class T>
//   ForwardIterator lower_bound (ForwardIterator first, 
//ForwardIterator last,const T& val);
// custom (2)	
// template <class ForwardIterator, class T, class Compare>
//   ForwardIterator lower_bound (ForwardIterator first, 
//ForwardIterator last,const T& val, Compare comp);

//   std::vector<int>::iterator low,up;
//   low=std::lower_bound (v.begin(), v.end(), 20); 
//   up= std::upper_bound (v.begin(), v.end(), 20); 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the vector: \n";
    cin>>n;
    vector<int> vec;
    int inp;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    int len;
    cout<<"Enter the size of the queries: \n";
    cin>>len;
    vector<int> oper;
    cout<<"Enter the operations: \n";
    for(int i=0;i<len;i++)
    {
        cin>>inp;
        oper.push_back(inp);
    }
    for(int i = 0;i<n;i++)
    {
        vector<int>::iterator low = lower_bound(vec.begin(),vec.end(),oper[i]);
        if(vec[low - vec.begin()]==oper[i])
            cout<<"Yes "<<(low - vec.begin()+1)<<endl;
        else
            cout<<"No "<<(low - vec.begin()+1)<<endl;
    }
    return 0;
}