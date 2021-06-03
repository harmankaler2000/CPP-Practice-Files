//WAP to Rearrange positive and negative numbers using inbuilt sort function
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"After sorting using inbuilt function sort: "<<endl;
    sort(arr,arr+n);
    for(int i = 0;i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}