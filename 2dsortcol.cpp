#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//function that compares the column of both the vector sub arrays of the 2 d matrix
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1]<v2[1];
}
//function to sort descinding
bool sortcol1(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1]>v2[1];
}
int main()
{
    vector<vector<int>> vect {{3,5,1},{4,8,6},{7,2,9}};
    int m = vect.size();
    int n = vect[0].size();
    cout<<"Matrix before sorting\n";
    for (int i=0; i<m; i++) 
    { 
        for (int j=0; j<n ;j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } 
    sort(vect.begin(),vect.end(),sortcol);
    cout<<"After sort the matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<vect[i][j]<<" ";
        cout<<endl;
    }
    cout<<"sorting reverse: ";
    cout<<endl;
    vector<vector<int>> vect1 {{3,5,1},{4,8,6},{7,2,9}};
    sort(vect1.begin(),vect1.end(),sortcol1);
    cout<<"After sort the matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<vect[i][j]<<" ";
        cout<<endl;
    }
}