#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//ascending
bool size1(const vector<int>& v1,const vector<int>& v2)
{
    return v1.size()<v2.size();
}

//descending
bool size2(const vector<int>& v1,const vector<int>& v2)
{
    return v1.size()<v2.size();
}

int main()
{
    vector<vector<int>> vec{{1, 2},{3, 4, 5},{6}};
    vector<vector<int>> vec1{{1, 2},{3, 4, 5},{6}};
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }
    return 0;
    //sorting 2d vector on basis 
    //of columns in row in ascending order

    //displaying initial vector
    cout<<"displaying initial vector: ";
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    //sort ascending on the basis of columns
    sort(vec.begin(),vec.end(),size1);
    
    cout<<"Display after sorting ascending: "<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }

    //sorting on the basis of col in a descending order
    cout<<"Sorting descending: "<<endl;
    sort(vec1.begin(),vec1.end(),size2);
    for(int i=0;i<vec1.size();i++)
    {
        for(int j=0;j<vec1[i].size();j++)
            cout<<vec1[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}