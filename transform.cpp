#include<bits/stdc++.h>
using namespace std;

int increment(int x) {return (x+1);}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    //apply increment to all elements of arr[]
    //and store them back in arr[]
    transform(arr, arr+n, arr, increment);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}