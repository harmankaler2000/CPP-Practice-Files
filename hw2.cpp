//double the first element and move zero to end
#include<bits/stdc++.h>
using namespace std;

void zero(int arr[],int n )
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    
    while(count < n)
    {
        arr[count] = 0;
        count++;
    }
}

void rearrange(int arr[], int n)
{
    if(n == 1)
        return;
    
    for(int i = 0; i < n - 1; i++)
    {
        if((arr[i] != 0) && (arr[i] == arr[i + 1]))
        {
            arr[i] = 2 * arr[i];
            arr[i + 1] = 0;
            i++;
        }
    }
    zero(arr,n);
}

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
    cout<<"The original array: \n";
    for(int i = 0;i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    rearrange(arr,n);
    cout<<"The rearranged array is: \n";
    for(int i = 0;i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}