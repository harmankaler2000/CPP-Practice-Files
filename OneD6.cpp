#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int max_gap(vector<int>& vec,int n)
{
    sort(vec.begin(),vec.end());
    int curr_diff = 0, diff = 0;
    if(vec.size() <= 1)
    {
        return curr_diff;
    }
    int i = 0, j = i + 1;
    while(i < n && j < n)
    {
        curr_diff = vec[j] - vec[i];
        i++;
        j++;
        diff = max(curr_diff, diff); 
    }
    return diff;
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: \n";
    cin>>n;
    vector<int> vec;
    cout<<"Enter the array: \n";
    int inp;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    int result = max_gap(vec,n);
    cout<<"The maximum consecutive gap is: "<<result;
    return 0;
}