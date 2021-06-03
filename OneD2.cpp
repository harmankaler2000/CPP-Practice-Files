/*
Given an integer array nums, design an algorithm to randomly 
shuffle the array. Create function shuffle, which takes array 
and it’s size as argument. Use rand() function to generate an 
array of random integer. Write another function swap, which 
would swap the elements at previous index with the new random index.
Sample Test Case : size=5
Input Array: [5,67,45,25,21]
Random index = [3,1,2,0,4]
Output array: [45,5,67,25,25]
if index is having no previous element, there is no swap.
*/
#include<iostream>
#include<time.h>
using namespace std;

//function to swap
void swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;

}

void randomize_swap(int arr[],int n)
{
    cout<<"Randomize the array: \n";
    //make sure that we do not get the same random array each time: 
    srand(time(NULL));
    int index;
    //randomize the array
    for(int i = n - 1;i > 0 ;i--)
    {
        //any no from 0 to i
        index = rand() % (i + 1);
        cout<<index<<" ";
        //swap elements of these index
        swap(&arr[i],&arr[index]);
    }
    cout<<"\nThe swapped array is: \n";
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    cout<<"Enter the array: \n";
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    randomize_swap(arr,size);
}