#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the aarray size: "<<endl;
    int input_array[n];
    for(int i=0;i<n;i++)
        cin>>input_array[i];
    cout<<"Enter the index for the defined array for swapping: \n";
    int index[n];
    for(int i=0;i<n;i++)
        cin>>index[i];
    for(int i=0;i<n;i++)
    {
        //loop till the index matches
        while(index[i]!=i)
        {
            swap(input_array[i],input_array[index[i]]);
            //after swaping elements swap the index of those array values
            swap(index[i],index[index[i]]); 
        }
    }
    cout<<"The updated array is: \n";
    for(int i=0;i<n;i++)
        cout<<input_array[i]<<" ";
    return 0;
}