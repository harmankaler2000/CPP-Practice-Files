#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<vector<int>> vect {{3,5,1},{4,8,6},{7,2,9}};
    //number of rows
    int m=vect.size();
    //number of colums \, assuming that all are
    //of same size
    int n=vect[m].size();
    cout<<"Before sorting the vector is: "<<endl;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[i].size();j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    //sorts the first row
    sort(vect[0].begin(),vect[0].end());
    cout<<"Displaying after sorting the first row: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}