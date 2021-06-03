//template example for bubble sort
#include<iostream>
using namespace std;

template<class T> void bubble(T a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = n - 1; i < j; j--)
        {
            if(a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array\n";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    //template function
    bubble<int>(arr, n);
    cout<<"Sorted array: \n";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}