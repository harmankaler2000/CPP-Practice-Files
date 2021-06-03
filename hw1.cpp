//WAP program to find the largest element in an array
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
    //method 2: linearly search every element and compare: O(n)
    int max = arr[0];
    for(int i = 1; i < n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<"Using method1 the max element is: "<<max<<endl;
    //method 2: O(n)
    int largest = *max_element(arr,arr+n);
    cout<<"Using method2 the largest element is: "<<largest<<endl;
    return 0;
}