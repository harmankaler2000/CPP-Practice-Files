#include<iostream>
#include<unordered_set>
using namespace std;

//Suppose you are given an array of n integers, and you need to find 
//all pairs of values in the array (if any) that sum to a given 
//integer k. write code that performs this task for you and outputs 
//all of the pairs that it finds. For example, if k is 12 and the 
//array is {10, 4, 7, 7, 8, 5, 15}, your code should output something 
//like the following:
//All pairs should be unique, but input data can have duplicate values.
//4+8=12
//7+5=12

int main()
{
    int n,k;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the sum value: \n";
    cin>>k;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //finding the common sum using hashing:
    //inserting the pair in unordered set to avoid duplicates
    unordered_set<int> a;
    for (int i = 0; i < n; i++) 
    {
        int temp = k - arr[i];
 
        if (a.find(k) != a.end())
        {
            cout<<"\n Pair is (" << arr[i] << ","<< temp << ")" << endl;
        }
        a.insert(arr[i]);
    }
    return 0;
}