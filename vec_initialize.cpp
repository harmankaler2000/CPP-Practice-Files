#include<iostream>
#include<vector>
using namespace std;

//ways to initialize an array
int main()
{
    //do it one by one
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    cout<<"initializing one by one \n";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //specifying size and initializing values
    int n = 3;
    //creates 3 sized vector of all 10
    cout<<"intializing using size\n";
    vector<int> v2(n,10);
    for(int x: v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //initializing using arrays
    cout<<"Initializing using arrays\n";
    vector<int> v3{10,20,30,40};
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    //initializing from an array
    cout<<"Using arrays: \n";
    int arr[] = {1,2,3,4};
    n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v7(arr,arr+n);
    for(int i=0;i<v7.size();i++)
    {
        cout<<v7[i]<<" ";
    }
    cout<<endl;

    //intializing from another vector
    cout<<"Using another vector \n";
    vector<int> v4 = {11,22,33,44};
    vector<int> v5 (v4.begin(),v4.end());
    for(int x : v5)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //initializing all elements with a specific value
    cout<<"Using a specific value: \n";
    vector<int> v6(5);
    int value = 5;
    fill(v6.begin(),v6.end(),value);
    for(int x : v6)
    {
        cout<<x<<" ";
    }
    return 0;
}