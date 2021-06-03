#include<iostream>
#include<vector>
using namespace std;

void pair_sum(vector<int> arr, int sum)
{
    //specifying iterators over the array
    vector<int>::iterator vec_it1;
    vector<int>::iterator vec_it2;
    //flag to check if no pair was found 
    int flag = 0; //0 = no pair found
    for(int i = 0; i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<"Pair found: ("<<arr[i]<<","<<arr[j]<<")\n";
                flag = 1; //pair exists
            }
        }
    }

    if(flag == 0)
    {
        cout<<"No such pair possible \n";
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    vector<int> array;
    //input the array
    int num;
    cout<<"Enter the array: \n";
    for(int i = 0; i < n;i++)
    {
        cin>>num;
        array.push_back(num);
    }
    //input the specified sum needed;
    int sum_needed;
    cout<<"Enter the sum: \n";
    cin>>sum_needed;
    //call the function
    pair_sum(array,sum_needed);
    return 0;
}