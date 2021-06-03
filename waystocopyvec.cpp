#include<iostream>
#include<vector>
using namespace std;

//using for loop
void iterative(vector<int> v1)
{
    vector<int> v2;
    for(int i=0;i<v1.size();i++)
    {
        v2.push_back(v1[i]);
    }
    cout<<"The copied vector using iteration is: \n";
    for(int j=0;j<v2.size();j++)
        cout<<v2[j]<<" ";
    cout<<endl;
}

//using assignment operator
void assignment(vector<int> v1)
{
    vector<int> v2 = v1;
    cout<<"The copied vector using assignment operator is: \n";
    for(int x=0;x<v2.size();x++)
        cout<<v2[x]<<" ";
    cout<<endl;
}

//by passig vector as a constructor
void constructor(vector<int> v1)
{
    vector<int> v2(v1);
    cout<<"The copied vector using constructor is: \n";
    for(int y=0;y<v2.size();y++)
        cout<<v2[y]<<" ";
    cout<<endl;
}

//by using the inbuilt copy function
void copy_inbuilt(vector<int> v1)
{
    vector<int> v2;
    copy(v1.begin(),v1.end(),back_inserter(v2));
    cout<<"The copied vector using copy inbuilt is: \n";
    for(int w=0;w<v2.size();w++)
        cout<<v2[w]<<" ";
    cout<<endl;
}

//using the assign method
void assign_inbuilt(vector<int> v1)
{
    vector<int> v2;
    //using the assign method
    v2.assign(v1.begin(),v1.end());
    cout<<"The copied vector using assign inbuilt is: \n";
    for(int d=0;d<v2.size();d++)
        cout<<v2[d]<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v1{1, 2, 3, 4};
    cout<<"the original vector is: "<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    iterative(v1);
    assignment(v1);
    constructor(v1);
    assign_inbuilt(v1);
    copy_inbuilt(v1);
    return 0;
}